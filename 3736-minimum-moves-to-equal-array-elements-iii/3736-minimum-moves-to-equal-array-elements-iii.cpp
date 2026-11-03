class Solution {
public:
    int minMoves(vector<int>& nums) {
        int n=nums.size();
        int sum1=0;
        int m=*max_element(nums.begin(),nums.end());
        for(int i=0;i<n;i++){
            sum1 += (m-nums[i]);
        }
        return sum1;
    }
};