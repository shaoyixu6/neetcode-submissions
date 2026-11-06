class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int>hash;
        for(int n:nums){
            if(hash.count(n)){
                return true;
            }
            hash.insert(n);
        }
        return false;
    }
};