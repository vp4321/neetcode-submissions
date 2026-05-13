class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> mp;
         vector<string> sorted_strs=strs;
        for(int i=0;i<sorted_strs.size();i++){
            sort(sorted_strs[i].begin(),sorted_strs[i].end());
            mp[sorted_strs[i]].push_back(strs[i]);
        }
        vector<vector<string>> res;
        for(auto x:mp){
            res.push_back(x.second);
        }
        return res;
    }
};
