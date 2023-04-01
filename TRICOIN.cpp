#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    long long int t, n, l = 1, r = 1e9, mid; cin>>t;
    for(int i = 0; i < t; i++){
        cin>>n;
        l = 1, r = 1e9;
        while(r - l > 1){
            mid = (l+r)/2
            if(n >= (pow(mid, 2) + mid) / 2) l = mid;
            else r = mid;
        }
        cout<<l
    }
    return 0;
}