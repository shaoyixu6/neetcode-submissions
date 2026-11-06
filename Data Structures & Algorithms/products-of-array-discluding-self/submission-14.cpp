class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> output(n, 1);
        
        // 1. 直接用 output 数组装前缀积
        for(int i = 1; i < n; i++) {
            output[i] = output[i-1] * nums[i-1];
        }
        
        // 2. 用变量 right 动态维护右边的乘积，边走边乘
        int right = 1;
        for(int i = n - 1; i >= 0; i--) {
            output[i] = output[i] * right; // 把当前的后缀积乘上去
            right = right * nums[i];       // 更新后缀积，供前一个数字使用
        }
        
        return output;
    }
};