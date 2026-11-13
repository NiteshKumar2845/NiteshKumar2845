class Solution {
    void subsets(vector<int> &nums, vector<vector<int>> &result, vector<int> &arr, int ind,  int l) {
        if(ind >= l) {
            result.push_back(arr);
            return;
        }
        arr.push_back(nums[ind]);
        subsets(nums, result, arr, ind+1, l);
        arr.pop_back();
        subsets(nums, result, arr, ind+1, l);
    }
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> result;
        vector<int> arr;
        int l = nums.size();
        subsets(nums, result, arr, 0, l);
        return result;
    }
};