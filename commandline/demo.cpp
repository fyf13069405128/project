#include <iostream>
int main() {
	int a=0,b=0;
	while(std::cin >> a >> b) {
		//输出a*b的值
		std::cout << a << " * " << b << " = " << a*b << std::endl;
	}
	return 0;
}	