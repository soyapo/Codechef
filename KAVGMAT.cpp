#include <bits/stdc++.h>
using namespace std;
const int mn = 1e6 + 2;
vector <int> all[mn];
int main(){
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    long long int t, n, m, k, p, count = 0, l, r, mid, x, y, avg; 
    cin>>t;
    for(int s = 0; s < t; s++){
        cin>>n>>m>>k;
        for(int i = 0; i <= m; i++) all[0].push_back(0);
        for(int i = 1; i <= n; i++){
			all[i].push_back(0);
			for(int j = 1; j <= m; j++){
				cin>>p;
				int tall = p + all[i-1][j] + all[i][j-1] - all[i-1][j-1];
				all[i].push_back(tall);
			}
		}
        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= m; j++){
                l = 1, r = n - i;
                while(r - l > 1){
                    mid = (l+r)/2;
                    x = i + mid -1, y = j + mid - 1;
                    avg = (all[x][y] + all[i-1][j-1] - all[i-1][y] - all[x][j-1]) / (mid * mid);
                    if(avg < k) l = mid;
                    else r = mid;
                } 
                count+= min(n-i-l+1, m-j-l+1);
            }
        }
        cout<<count<<endl;
        for(int i = 0; i < n; i++) all[i].clear();
    }
    return 0;
}