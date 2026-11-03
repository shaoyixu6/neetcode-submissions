class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector <int> topFrequent;
        unordered_map <int,int> check;
        for(int i = 0;  i< nums.size();i++){
            check[nums[i]]++;
        }
        int n = nums.size();
        vector<vector<int>>buckets(n+1);
        for(auto &key: check){
            buckets[key.second].push_back(key.first);
        }
        for(int i =n;i>=0;i--){
            for(int num: buckets[i]){
                topFrequent.push_back(num);
                if(topFrequent.size()>=k){
                    return topFrequent;
                }
            }
        }
        return topFrequent;

    }
};
