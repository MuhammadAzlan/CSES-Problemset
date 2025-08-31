#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<int> numbers(n - 1);
    long long actual_sum = 0;
    for (int i = 0; i < n - 1; ++i) {
        cin >> numbers[i];
        actual_sum += numbers[i];
    }
    long long expected_sum = static_cast<long long>(n) * (n + 1) / 2;
    long long missing_number = expected_sum - actual_sum;
    cout << missing_number << endl;
    return 0;
}