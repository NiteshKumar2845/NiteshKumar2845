class Solution {
public:
    string minWindow(string s, string t) {
        unordered_map<char, int> need;
        for(auto st : t) {
            need[st]++;
        }

        int left = 0;
        int count = 0;
        int minLen = INT_MAX;
        int start = 0;

        unordered_map<char, int> mp;
        for(int right = 0; right < s.size(); right++) {
            char ch = s[right];
            mp[ch]++;

            if(need.count(ch) && mp[ch] <= need[ch]) {
                count++;
            }

            while(count == t.size()) {
                if((right-left+1) < minLen) {
                    minLen = right-left+1;
                    start = left;
                }

                char leftCh = s[left];
                mp[leftCh]--;

                if(need.count(leftCh) && mp[leftCh] < need[leftCh]) {
                    count--;
                }

                left++;
            }
        }

        return minLen == INT_MAX ? "" : s.substr(start, minLen);
    }
};