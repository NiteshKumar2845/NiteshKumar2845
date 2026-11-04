class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> mp;
        int count = 0;
        int left = 0;
        int ans = 0;

        for(int right = 0; right < s.size(); right++) {
            char ch = s[right];

            if(mp[ch] < 1) {
                mp[ch]++;
                count++;
                ans = max(ans, count);
            }

            else {
                while(mp[ch] > 0) {
                    mp[s[left]]--;
                    count--;
                    left++;
                }
                mp[ch]++;
                count++;
                ans = max(ans, count);
            }
        }

        return ans;
    }
};