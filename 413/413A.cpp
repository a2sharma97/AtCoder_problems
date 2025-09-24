#include<bits/stdc++.h>
using namespace std;
const int mx = INT_MAX;
const int mn = INT_MIN;
#define mod 1000000007
#define yes printf("YES\n");
#define no printf("NO\n");
#define endl "\n"


void solve(){
    int  n, m ;
    long long int sum = 0;
    cin >> n >> m;
    for(int i = 0; i < n; i++) {
        int x;
        cin >> x;
        sum += x;
    }
    if(sum <= m) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
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