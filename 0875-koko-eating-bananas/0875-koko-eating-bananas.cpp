class Solution {
public:

    bool canEat(vector<int>& piles, int h, int mid) {
        long long hours = 0;

        for(auto pile : piles) {
            hours += (pile + (long long)mid - 1) / mid;
        }

        return hours <= h;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1;
        int high = *max_element(piles.begin(), piles.end());
        int ans = high;

        while(low <= high) {
            int mid = low + (high - low) / 2;

            if(canEat(piles, h, mid)) {
                ans = mid;
                high = mid - 1;
            }
            else {
                low = mid + 1;
            }
        }

        return ans;
    }
};