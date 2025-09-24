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
    vector<string>str(n);
    for(int i = 0; i < n; i++) {
        cin >> str[i];
    }
    set<string>s;
    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            s.insert(str[i] + str[j]);
            s.insert(str[j] + str[i]);
        }
    }
    cout << s.size() << endl;
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