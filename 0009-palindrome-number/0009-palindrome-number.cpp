class Solution {
public:
    // razzgamer0007
    bool isPalindrome(int x) {
        int num = x;
        int dig = 0, rev = 0;

        if (x >= 0) {
            while (x > 0) {
                dig = x % 10;

                // Check overflow before: rev = rev * 10 + dig
                if (rev > INT_MAX / 10 ||
                    (rev == INT_MAX / 10 && dig > INT_MAX % 10)) {
                    return false;
                }

                rev = rev * 10 + dig;
                x = x / 10;
            }

            return rev == num;
        }

        return false;
    }
};