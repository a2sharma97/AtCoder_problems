#include<bits/stdc++.h>
using namespace std;
const int mx = INT_MAX;
const int mn = INT_MIN;
#define mod 1000000007
#define yes printf("YES\n");
#define no printf("NO\n");
#define endl "\n"


void solve(){
    string s, t;
    cin >> s >> t;
    bool flag = true;
    for(int i = 1; i < s.length(); i++) {
        if(s[i] >='A' && s[i] <= 'Z') {
            flag = false;
            for(int j = 0; j < t.length(); j++) {
                if(t[j] == s[i - 1]) {
                    flag = true;
                    break;
                } else {
                    flag = false;
                }
            }
            if(!flag) {
                break;
            }
        }
    }
    if(flag) {
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