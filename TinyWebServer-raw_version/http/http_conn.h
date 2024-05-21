#ifndef HTTPCONNECTION_H
#define HTTPCONNECTION_H
#include <unistd.h>
#include <signal.h>
#include <sys/types.h>
#include <sys/epoll.h>
#include <fcntl.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <assert.h>
#include <sys/stat.h>
#include <string.h>
#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/mman.h>
#include <stdarg.h>
#include <errno.h>
#include <sys/wait.h>
#include <sys/uio.h>
#include "../lock/locker.h"
#include "../CGImysql/sql_connection_pool.h"
class http_conn
{
public:
    static const int FILENAME_LEN = 200;
    static const int READ_BUFFER_SIZE = 2048;
    static const int WRITE_BUFFER_SIZE = 1024;
    enum METHOD
    {
        GET = 0,
        POST,
        HEAD,
        PUT,
        DELETE,
        TRACE,
        OPTIONS,
        CONNECT,
        PATH
    };
    enum CHECK_STATE
    {
        CHECK_STATE_REQUESTLINE = 0,
        CHECK_STATE_HEADER,
        CHECK_STATE_CONTENT
    };
    enum HTTP_CODE
    {
        NO_REQUEST,
        GET_REQUEST,
        BAD_REQUEST,
        NO_RESOURCE,
        FORBIDDEN_REQUEST,
        FILE_REQUEST,
        INTERNAL_ERROR,
        CLOSED_CONNECTION
    };
    enum LINE_STATUS
    {
        LINE_OK = 0,
        LINE_BAD,
        LINE_OPEN
    };

public:
    http_conn() {}
    ~http_conn() {}

public:
    void init(int sockfd, const sockaddr_in &addr);
    void close_conn(bool real_close = true);
    void process();    //调用process_read()和process_write(HTTP_CODE ret)，线程池每次执行的就是该函数
    bool read_once();  //将数组从socket读取到缓冲区数组m_read_buf中
    bool write();      //将响应报文从m_write_buf写到socket中
    sockaddr_in *get_address()
    {
        return &m_address;
    }
    void initmysql_result(connection_pool *connPool);

private:
    void init();
    HTTP_CODE process_read();             //对缓冲区报文进行逐行分析，调用从状态机parse_line()，根据主状态机状态解析报文，最后调用do_request()处理请求
    bool process_write(HTTP_CODE ret);    //将响应报文写到写缓冲中
    HTTP_CODE parse_request_line(char *text);
    HTTP_CODE parse_headers(char *text);
    HTTP_CODE parse_content(char *text);
    HTTP_CODE do_request();               //处理请求，如登录，注册，请求文件，生成响应报文
    char *get_line() { return m_read_buf + m_start_line; };  //m_start_line;   //m_read_buf中已经解析的字符个数
    LINE_STATUS parse_line();
    void unmap();
    bool add_response(const char *format, ...);
    bool add_content(const char *content);
    bool add_status_line(int status, const char *title);
    bool add_headers(int content_length);
    bool add_content_type();
    bool add_content_length(int content_length);
    bool add_linger();
    bool add_blank_line();

public:
    static int m_epollfd;
    static int m_user_count;
    MYSQL *mysql;

private:
    int m_sockfd;
    sockaddr_in m_address;
    char m_read_buf[READ_BUFFER_SIZE];
    int m_read_idx;     //已经读到读缓冲的字符个数
    int m_checked_idx;  //m_checked_idx指向从状态机当前正在分析的字节
    int m_start_line;   //m_read_buf中已经解析的字符个数
    char m_write_buf[WRITE_BUFFER_SIZE];   //状态行，响应头，空行，403,404,500报错信息都是写到写缓冲，文件请求的文件会单独写到另一个空间
    int m_write_idx;    //响应报文已经写到写缓冲的字符个数
    CHECK_STATE m_check_state;
    METHOD m_method;
    char m_real_file[FILENAME_LEN];   //存储待读取文件的绝对路径
    char *m_url;
    char *m_version;
    char *m_host;
    int m_content_length;
    bool m_linger;
    char *m_file_address;     //请求文件在内存的首地址
    struct stat m_file_stat;  //文件请求时文件状态
    struct iovec m_iv[2];
    int m_iv_count;
    int cgi;        //是否启用的POST
    char *m_string; //存储请求数据
    int bytes_to_send;
    int bytes_have_send;
};

#endif
