class Solution {
public:
    int lengthOfLongestSubstring(string s) {

        int mp[256] = {};

        int left = 0;
        int maxCount = 0;

        for (int right = 0; right < s.length(); right++) {

            while (mp[s[right]] > 0) {
                mp[s[left]]--;
                left++;
            }

            mp[s[right]]++;

            maxCount = max(maxCount, right - left + 1);
        }

        return maxCount;
    }
};