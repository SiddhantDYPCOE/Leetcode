class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxi = nums[0];
        int mini = nums[0];
        int ans = nums[0];

        for (int i = 1; i < nums.size(); i++) {
            int curr = nums[i];

            int tempMax = max({curr, maxi * curr, mini * curr});
            int tempMin = min({curr, maxi * curr, mini * curr});

            maxi = tempMax;
            mini = tempMin;

            ans = max(ans, maxi);
        }

        return ans;
    }
};