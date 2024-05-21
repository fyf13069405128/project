#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        quickSort(nums, 0, nums.size() - 1);
        return nums;
    }
    //快排，划分函数，以第一个元素为枢轴（主元）
    int partition(vector<int>& nums, int left, int right) {
        int pivot = nums[left];
        while(left < right) {
            while(left < right && nums[right] >= pivot) right--;
            nums[left] = nums[right];
            while(left < right && nums[left] <= pivot) left++;
            nums[right] = nums[left];
        }
        nums[left] = pivot;
        return left;
    }
    void quickSort(vector<int>& nums, int left, int right) {
        if(left >= right) return;
        int pivotpos = partition(nums, left, right);
        quickSort(nums, left, pivotpos - 1);
        quickSort(nums, pivotpos + 1, right);
    }
};

int main() {
    Solution test;
    vector<int> v{9,8,7,5,4,1,2};
    test.sortArray(v);
    for(int i = 0; i < v.size(); ++i) {
        cout << v[i] << " ";
    }
    return 0;
}

