class Solution {
public:
    int lengthOfLastWord(string s) {
        int len = 0;
        int n = s.size();
        int i = n -1;
        int flag = 1;
        while (i >= 0 && flag) {
            if (s[i] == ' ')
                i--;
            else
                flag = 0;
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