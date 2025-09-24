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
    string str = "";
    bool flag = true;
    long long int tot_len = 0;
    for(int i = 0; i < n; i++) {
        char ch;
        long long int l;
        cin >> ch >> l;
        tot_len += l;
        if(tot_len <= 100 && l <= 100 && flag) {
            for(int j = 0; j < l; j++) {
                str += ch;
            }
        }
        else {
            flag = false;
            str = "Too Long";
        }
    }
    cout << str << endl;
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