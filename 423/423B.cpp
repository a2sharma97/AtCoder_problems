#include<bits/stdc++.h>
using namespace std;
const int mx = INT_MAX;
const int mn = INT_MIN;
#define mod 1000000007
#define yes printf("YES\n");
#define no printf("NO\n");
#define endl "\n"


void solve(){
    int n;
    cin >> n;
    vector<int>arr(n);
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int x = 0, y = 0;
    for(int i = 0; i < n; i++) {
        if(arr[i] == 1) {
            x = i;
            break;
        }
    }
    for(int i = n - 1; i >= 0; i--) {
        if(arr[i] == 1) {
            y = i;
            break;
        }
    }
    cout << y - x << endl;
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