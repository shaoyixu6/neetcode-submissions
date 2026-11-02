class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>different;
        for(int i =0 ;i<nums.size();i++){
            int diff = target - nums[i];
            auto lookupDiff = different.find(diff);
            if(lookupDiff!=different.end()){
                return{lookupDiff->second,i};
            }
            different[nums[i]] = i;
        }
        return {};
    }
};
