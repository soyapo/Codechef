#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
	long long t, n, m, a = 0, k; cin >> t;
	for(int i = 0; i < t; i++){
        cin >> n >> m;
        vector <long long> arr(n + 1);
        a = 0;
        for (long long j = 2; j <= n; j++) {
            k = m % i;
            ans += arr[a];
            for (long long s = a; s <= n; s += i) arr[s]++;
        }
        cout << ans << endl;
    }
    return 0;
}