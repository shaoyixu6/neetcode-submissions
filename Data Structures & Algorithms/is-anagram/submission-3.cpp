class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int>hashS;
        unordered_map<char,int>hashT;
        for(int i = 0;i<s.length();i++){
            hashS[s[i]]++;
        }
        for(int i = 0;i<t.length();i++)
        {
            hashT[t[i]]++;
        }
        if(hashS==hashT){
            return true;
        }
        return false;
    }
};
