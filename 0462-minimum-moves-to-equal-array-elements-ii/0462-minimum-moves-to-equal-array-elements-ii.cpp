class Solution {
public:
    int minMoves2(vector<int>& nums) {
        int l = nums.size();
        sort(nums.begin(), nums.end());

        int mid = nums[l/2];

        int moves = 0;
        for(auto num : nums) {
            moves += abs(num - mid);
        }

        return moves;
    }
};