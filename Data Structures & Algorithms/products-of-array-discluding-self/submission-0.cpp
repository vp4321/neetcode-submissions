class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int product=1;
        int zeroes=0;
        int pos=0;
        vector<int> res(nums.size(),0);
        for(int i=0;i<nums.size();i++){ 
            if(nums[i]==0){
                zeroes++;
                pos=i;
                if(zeroes>1){
                    return res;
                }
            }
            else
            {
                product*=nums[i];
            }
        }
        if(zeroes>0){
            res[pos]=product;
            return res;
        }
        for(int i=0;i<nums.size();i++){
            res[i]=(product/nums[i]);
        }
        return res;

    }
};
