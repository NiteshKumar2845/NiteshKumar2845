class Solution {
public:
    int findMin(vector<int>& nums) {
        int l = nums.size();
        int low = 0, high = l-1;
        int ans = INT_MAX;

        while(low <= high) {

            while(low < high && nums[low] == nums[low+1]) low++;
            while(low < high && nums[high] == nums[high-1]) high--;

            int mid = low + (high - low) / 2;

            if(nums[mid] < ans) {
                ans = nums[mid];
            }
            if(nums[mid] > nums[high]) {
                low = mid + 1;
            }
            else {
                high = mid - 1;
            }
        }

        return ans;
    }
};