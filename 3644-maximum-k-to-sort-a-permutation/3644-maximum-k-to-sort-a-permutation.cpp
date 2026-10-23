class Solution {
public:
    int sortPermutation(vector<int>& nums) {
        int ans = 0;
        bool check = true;

        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] != i) {
                if(check) {
                    ans = nums[i] & i;
                    check = false;
                }

                else ans = ans & i;
            }
        }
        
        return ans;
    }
};