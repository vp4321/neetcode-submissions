class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {

        vector<int> ppl;
        vector<int> ppr;
        int pl=1;
        int pr=1;

        vector<int> res(nums.size(),1);
        for(int i=1;i<nums.size();i++){ 
            res[i]=res[i-1]*nums[i-1];
        }
        for(int i=nums.size()-2;i>=0;i--){
            pr*=nums[i+1];
            res[i]=res[i]*pr;            
        }
        return res;
    }
};
