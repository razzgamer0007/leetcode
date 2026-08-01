class Solution {
public:
        // razzgamer0007
    int lengthOfLongestSubstring(string s) {
        vector<int> lastSeen(128, -1);  // ASCII range
        int left = 0, maxLen = 0;
        for (int right = 0; right < s.size(); right++) {
            if (lastSeen[s[right]] >= left) {
                left = lastSeen[s[right]] + 1;
            }
            lastSeen[s[right]] = right;
            maxLen = max(maxLen, right - left + 1);
        }
        return maxLen;
    }
};