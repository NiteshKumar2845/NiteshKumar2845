class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int low = 0, high = nums.size() - 1;
        int first = -1, second = -1;
        
        while(low <= high) {
            int mid = low  + (high - low) / 2;

            if(nums[mid] >= target) {
                if(nums[mid] == target) {
                    first = mid;
                }
                high = mid - 1;
            }

            else  {
                low = mid + 1;
            }
        }

        low = 0;
        high = nums.size() - 1;

        while(low <= high) {
            int mid = low + (high - low) / 2;

            if(nums[mid] <= target) {
                if(nums[mid] == target) {
                    second = mid;
                }
                low = mid + 1;
            }
            else {
                high = mid - 1;
            }
        }

        return {first, second};
    }
};