class Solution {
public:
    // razzgamer0007
    int lengthOfLastWord(string s) {
        int len = 0;
        int i = s.size() - 1;
        while (i >= 0) {
            if (s[i] == ' ')
                i--;
            else
                break;
        }
        while (i >= 0) {
            if (s[i] != ' ') {
                len++;
                i--;
            }
            else
                break;
        }
        return len;
    }
};