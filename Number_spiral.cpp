#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main(){
	//int num[5][5]={{1,2,9,10,25},{4,3,8,11,24},{5,6,7,12,23},{16,15,14,13,22},{17,8,19,20,21}};
	
	 int t;
    cin >> t;
    while (t--) {
        ll y, x;
        cin >> y >> x;
        ll m = max(x, y);
        ll ans;
        if (m % 2 == 0) {
            if (y == m) ans = m * m - (x - 1);
            else ans = (m - 1) * (m - 1) + y;
        } else {
            if (x == m) ans = m * m - (y - 1);
            else ans = (m - 1) * (m - 1) + x;
        }
        cout <<"\n" <<ans << "\n";
    }
	return 0;
}