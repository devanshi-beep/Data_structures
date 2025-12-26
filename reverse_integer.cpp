class Solution {
public:
    int reverse(int x) {
        if (x == INT_MIN) return 0;   // fix for abs(INT_MIN)

        int n = abs(x);
        long long revno = 0;

        while (n > 0) {
            int last = n % 10;
            revno = (revno * 10) + last;

            if (revno > INT_MAX)
                return 0;

            n = n / 10;
        }

        if (x < 0) revno = -revno;

        return (int)revno;
    }
};