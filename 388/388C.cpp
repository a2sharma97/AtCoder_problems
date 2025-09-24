#include<bits/stdc++.h>
using namespace std;
const int mx = INT_MAX;
const int mn = INT_MIN;
#define mod 1000000007
#define yes printf("YES\n");
#define no printf("NO\n");
#define endl "\n"


void solve(){
    long long int n;
    cin >> n;
    vector<long long int>arr(n);
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    long long int ans = 0, k = 0;
    for(int i = 0; i < n; i++) {
        while(arr[k] * 2 <= arr[i]) k++;
        ans += k;
    }
    cout << ans << endl;
}


signed main()
{
	ios::sync_with_stdio(false);
    cin.tie(NULL);  cout.tie(NULL);                     
    int t=1;
    // cin>>t;
    for(int i=1;i<=t;i++){
    	solve();
    }
}