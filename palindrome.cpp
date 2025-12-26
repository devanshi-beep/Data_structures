#include <bits/stdc++.h> 
#include <iostream>
#include <cctype>
using namespace std;

bool checkPalindrome(string s) {
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
