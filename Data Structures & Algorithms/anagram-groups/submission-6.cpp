class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map <string,vector<string>> group;

       for (const string& s : strs) {
            
            string key(26, 0); 
            for (char c : s) {
                key[c - 'a']++; 
            }
            group[key].push_back(s); 
        }
       vector<vector<string>>result;
       for(auto&pair:group){
            result.push_back(pair.second);
       }
       return result;
    }
};
