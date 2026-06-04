class Solution {
public:

    string getLenAsString(string s){
        int len=s.length();
        if(len==0) return "000";
        if(len>=0 && len<10)
        return "00"+to_string(len);
        else if(len>=10 && len<100)
        return "0"+to_string(len);
        else
        return to_string(len);

    }
    string encode(vector<string>& strs) {
        string s="";
        for(string x:strs){
            s+=getLenAsString(x)+x;
        }
        return s;
    }

    vector<string> decode(string s) {
        vector<string> strs;
        int i=0;
        while(i<s.length())
        {
            int len = stoi(s.substr(i,3));
            i+=3;
            strs.push_back(s.substr(i,len));
            i+=len;
        }
        return strs;
    }
};
