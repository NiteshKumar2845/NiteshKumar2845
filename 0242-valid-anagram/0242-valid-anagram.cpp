class Solution {
public:
    bool isAnagram(string s, string t) {
        int l1 = s.size();
        int l2 = t.size();

        if(l1 != l2) return false;

        sort(s.begin(), s.end());
        sort(t.begin(), t.end());

        if(s != t) return false;

        // vector<int> anagram(26);
        // for(int i = 0; i < l1; i++) {
        //     anagram[s[i] - 'a']++;
        //     anagram[t[i] - 'a']--;
        // }

        // for(int i = 0; i < 26; i++) {
        //     if(anagram[i] != 0) return false;
        // }

        return true;
    }
};