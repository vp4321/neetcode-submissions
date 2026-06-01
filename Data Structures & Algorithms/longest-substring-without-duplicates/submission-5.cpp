class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l=0;
        int r=0;
        int maxi=0;
        int res_start=0;
        int res_end=0;
        unordered_map<char,int> mp;
        while(l<s.length() && r<s.length()){
            
            if(mp[s[r]]>0){
                int temp=mp[s[r]];
                for(int i=l;i<mp[s[r]];i++){
                    mp[s[i]]=0;
                }
                l=temp;
                mp[s[r]]=r+1;
            }
            else{
                mp[s[r]]=r+1;
                if(maxi<r-l+1){
                    maxi=r-l+1;
                    res_start=l;
                    res_end=r;

                }
                
            }
            r++;
        }
        return maxi;
    }
};
