class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        int count = 0;
        for(int i = 0; i < arr1.size(); i++) {
            int n1 = arr1[i] - d;
            int n2 = arr1[i] + d;
            bool check = true;
            for(int j = 0; j < arr2.size(); j++) {
                if(arr2[j] >= n1 && arr2[j] <= n2 && check) {
                    check = false;
                    break;
                }
            }
            if(check) count++;
            check = true;
        }

        return count;
    }
};