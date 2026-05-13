class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length()){
            return false;
        }
        unordered_map<char,int> mp_s;
        unordered_map<char,int> mp_t;
        for(char c: s){
            mp_s[c]++;
        }
        for(char c: t){
            mp_t[c]++;
        }
        for(auto i:mp_s)
        {
            if(mp_t.find(i.first)!=mp_t.end())
            {
                if(mp_t[i.first]!=i.second)
                    return false;
            }
            else{
                return false;
            }
        }
        return true;


    }
};
