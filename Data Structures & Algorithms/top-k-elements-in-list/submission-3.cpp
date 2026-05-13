class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> freq;
        for(int i:nums){
            freq[i]++;
        }
        vector<pair<int,int>> v;

    for (auto x : freq) {
        v.push_back(x);
    }
        sort(v.begin(),v.end(),[](auto &a, auto &b){
            return a.second>b.second;
        });
        vector<int> res;
        for (auto x : v) {
            if(k==0){
                return res;
            }
            res.push_back(x.first);
            k--;
        }
        return res;
    }
};
