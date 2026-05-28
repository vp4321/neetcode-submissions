class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum=0;
        int maxi=nums[0];
        int l=0;int r=0;
        int ans_l=0;int ans_r=0;
        while(r<nums.size()){
            sum+=nums[r];
            if(sum>maxi){
                maxi=sum;
                ans_l=l;
                ans_r=r;
                }
            if(sum<0){
                l=r;
                sum=0;
            }

            r++;
        }
        return maxi;
    }
};
