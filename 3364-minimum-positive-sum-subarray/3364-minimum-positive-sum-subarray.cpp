class Solution {
public:
    int minimumSumSubarray(vector<int>& nums, int l, int r) {
        int n = nums.size();
        int ans = INT_MAX;

        vector<int> prefix(n + 1, 0);

        for(int i = 0; i < n; i++) {
            prefix[i + 1] = prefix[i] + nums[i];
        }

        for(int left = 0; left < n; left++) {
            for(int len = l; len <= r; len++) {
                int right = left + len;

                if(right > n) break;

                int sum = prefix[right] - prefix[left];
                if(sum > 0) {
                    ans = min(ans, sum);
                }
            }
        }

        return ans == INT_MAX ? -1 : ans;
    }
};