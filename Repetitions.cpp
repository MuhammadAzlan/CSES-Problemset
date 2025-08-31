#include<bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    int n = s.length();
    if (n == 0) {
        cout << 0 << endl;
        return 0;
    }
    int max_len = 1;
    int current_len = 1;
    for (int i = 1; i < n; i++) {
        if (s[i] == s[i-1]) {
            current_len++;
        } else {
            current_len = 1;
        }
        max_len = max(max_len, current_len);
    }
    cout << max_len << endl;
    return 0;
}