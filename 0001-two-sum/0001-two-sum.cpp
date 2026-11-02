class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int sum;
        int n = nums.size();
        vector<int> ans(2);

        for(int i =0;i<n;i++){
            for(int j=i+1;j<n;j++){
                sum=nums[i]+nums[j];
                if(sum==target){
                    ans[0]=i;
                    ans[1]=j;
                }
            }
        }
        return ans;
    }
};