class Solution {
public:

    string encode(vector<string>& strs) {
        string e ="";
        for(string s:strs){
            e+=to_string(s.length())+"#"+s;
        }
        return e;
    }

    vector<string> decode(string s) {
        vector<string>d;
        int i = 0;
        while(i<s.length()){
            int j = i;
            while(s[j]!='#'){
                j++;
            }
            int length = stoi(s.substr(i,j-i));
            string str = s.substr(j+1,length);
            d.push_back(str);
            i = j+1+length;
        }
        return d;



    }
};
