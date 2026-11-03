class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int>topFrequent;
        unordered_map<int,int>freq;
        for(int i = 0; i< nums.size();i++){
            freq[nums[i]]++;
        }
        int n = nums.size()+1;
        vector<vector<int>> buckets(n+1);
        for(auto key: freq){
            buckets[key.second].push_back(key.first);
        }
        
        for(int i = n;i>=0;i--){
            for(auto number :buckets[i]){
                topFrequent.push_back(number);
                if(topFrequent.size()==k){
                    return topFrequent;
                }
            }
        }
        return topFrequent;

    }
};
