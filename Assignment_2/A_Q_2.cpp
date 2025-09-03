#include <iostream>
#include <string>
using namespace std;

bool canSplit(string s) {
    if (s.length() < 3) return false;

    int letters[26] = {0};

    for (char c : s) {
        letters[c - 'a']++;
        if (letters[c - 'a'] >= 3)
            return true;
    }

    return false;
}

int main() {
    string s = "ababa";
    cout << (canSplit(s) ? "Yes" : "No");
    return 0;
}