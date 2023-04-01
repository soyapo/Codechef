#include<bits/stdc++.h>
using namespace std;
const int mn = 1e5 + 5;
int arr[mn];
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t, n; cin>>t;
	for(int i = 0; i < n; i++){
	    cin>>n;
	    for(int i=0;i<n;i++) cin>>arr[i];
        vector <int> nums;
        for(int i=0;i<n;i++){
            int val = arr[i], l = 0, ans, u = nums.size() - 1, found = 0, mid;
            while(l <= u){
                mid = l + (u - l) / 2;
                if(nums[mid]>val) ans = mid, u = mid - 1, found = 1;
                else l = mid + 1;
            }
            if(!found) nums.push_back(val);
            else nums[ans]=val;
        }
        cout << nums.size() << " "; 
        for(auto x:nums) cout<<x<<" ";
        cout<<endl;
	}
    return 0;
}
 