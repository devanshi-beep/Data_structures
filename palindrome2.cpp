class Solution {

public:
    bool isPalindrome(int x) {
        if (x == INT_MIN) return false;   // cannot be palindrome

        int original = x;

        if (x < 0) return false;  // negative numbers can never be palindrome

        int n = x;
        long long revno = 0;

        while (n > 0) {
            int last = n % 10;
            revno = (revno * 10) + last;

            if (revno > INT_MAX)
                return false;

            n = n / 10;
        }

        return (revno == original);
    }
};

//valid palindrome 
class Solution {
public:
    bool isPalindrome(string s) {
        string t = "";

    // clean the string
    for (char c : s) {
        if (isalnum(c)) {          // keep only letters & digits
            t += tolower(c);       // convert to lowercase
        }
    }

    // palindrome check
    int i = 0, j = t.length() - 1;
    while (i < j) {
        if (t[i] != t[j]) return false;
        i++;
        j--;
    }
    return true;
        
    }
};