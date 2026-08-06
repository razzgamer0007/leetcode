class Solution {
public:
    // razzgamer0007
    int reverse(int x) {
        int ans = 0;
        while ( 0 != x) {
            if (ans > INT_MAX / 10)
                return 0;
            if (ans < INT_MIN / 10)
                return 0;
            ans = ans * 10 + (x % 10);
            x /= 10;
        }
        return ans;
    }
};