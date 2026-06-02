class Solution {
public:
    int characterReplacement(string s, int k) {
        int maxi=0;
        int l=0;int r=0;
        int rep=k;
        int max_freq=0;
        unordered_map <char,int> freq_map;
        for(r=0;r<s.length();r++){
            freq_map[s[r]]++;
            max_freq=max(max_freq,freq_map[s[r]]);
            while(r-l+1-max_freq>k){
                freq_map[s[l]]--;
                l++;
            }
            maxi=max(maxi,r-l+1);
        }
        return maxi;
    }
};
