#include<bits/stdc++.h>
using namespace std;
const int mx = INT_MAX;
const int mn = INT_MIN;
#define mod 1000000007
#define yes printf("YES\n");
#define no printf("NO\n");
#define endl "\n"


void solve(){
    int n, m, k;
    cin >> n >> m >> k;
    vector<int>arr(n), ans;
    for(int i = 0; i < k; i++) {
        int p, q;
        cin >> p >> q;
        arr[p - 1]++;
        if(arr[p - 1] == m) {
            ans.push_back(p);
        } 
    }
    for(auto x : ans) {
        cout << x << " ";
    }
    cout << endl;
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