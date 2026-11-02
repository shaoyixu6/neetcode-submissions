class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map <string,vector<string>> group;

        for(string s: strs){
            string key = s;
            std::sort(s.begin(),s.end());
            group[s].push_back(key);
        }
        vector<vector<string>> result;
        for(auto&pair:group){
            result.push_back(pair.second);
        }
        return result;
    }
};
