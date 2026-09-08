class Solution {
private:
    int helper(vector<int>& nums, int goal){
        int l=0;
        int r=0;
        int sum=0;
        int cnt=0;
        if(goal < 0) return 0;
        while(r<nums.size()){
            sum+=(nums[r]%2);
            while(sum>goal){
                sum-=(nums[l]%2);
                l++;
            }
                cnt=cnt+(r-l+1);
                r++;
        }
        return cnt;
    }
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
         return helper(nums, k)-helper(nums, k-1);
    }
};