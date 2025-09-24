#include<bits/stdc++.h>
using namespace std;
const int mx = INT_MAX;
const int mn = INT_MIN;
#define mod 1000000007
#define yes printf("YES\n");
#define no printf("NO\n");
#define endl "\n"


void solve(){
    int n, l, r, cnt = 0;
    cin >> n >> l >> r;
    for(int i = 0; i < n; i++) {
        int x, y;
        cin >> x >> y;
        if(x <= l && y >= r) {
            cnt++;
        }
    }
    cout << cnt << endl;
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