class Solution {
public:
    string longestPalindrome(string s) {
        if (s.empty()) return "";

        // Transform: insert separators to handle even/odd uniformly
        // "abba" -> "^#a#b#b#a#$"
        string t = "^#";
        for (char c : s) {
            t += c;
            t += '#';
        }
        t += "$";

        int n = t.size();
        vector<int> p(n, 0);  // p[i] = radius of palindrome centered at i in t
        int center = 0, right = 0;

        for (int i = 1; i < n - 1; i++) {
            int mirror = 2 * center - i;

            if (i < right) {
                p[i] = min(right - i, p[mirror]);
            }

            // Expand around center i
            while (t[i + p[i] + 1] == t[i - p[i] - 1]) {
                p[i]++;
            }

            // Update center/right if palindrome centered at i expands past right
            if (i + p[i] > right) {
                center = i;
                right = i + p[i];
            }
        }

        // Find max palindrome length and its center
        int maxLen = 0, centerIndex = 0;
        for (int i = 1; i < n - 1; i++) {
            if (p[i] > maxLen) {
                maxLen = p[i];
                centerIndex = i;
            }
        }

        int start = (centerIndex - maxLen) / 2;  // map back to original string
        return s.substr(start, maxLen);
    }
};