#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    vector<int> freq(26, 0);
    for (char c : s) freq[c - 'A']++;

    int oddCount = 0, oddChar = -1;
    for (int i = 0; i < 26; i++) {
        if (freq[i] % 2 != 0) {
            oddCount++;
            oddChar = i;
        }
    }

    if (oddCount > 1) {
        cout << "NO SOLUTION\n";
        return 0;
    }

    string left = "", middle = "", right = "";
    for (int i = 0; i < 26; i++) {
        if (freq[i] % 2 != 0) {
            middle = string(freq[i], 'A' + i);
        } else {
            left += string(freq[i] / 2, 'A' + i);
        }
    }

    right = left;
    reverse(right.begin(), right.end());

    cout << left + middle + right << "\n";
    return 0;
}
