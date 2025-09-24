#include<bits/stdc++.h>
using namespace std;
const int mx = INT_MAX;
const int mn = INT_MIN;
#define mod 1000000007
#define yes printf("YES\n");
#define no printf("NO\n");
#define endl "\n"


void solve(){
    int query;
    cin >> query;
    vector<int>arr;
    for(int i = 1; i <= query; i++) {
        int x , y;
        cin >> x;
        if(x == 1) {
            cin >> y;
            arr.push_back(y);
        } else {
            if(arr.empty()) {
                cout << 0 << endl;
            } else {
                cout << arr[arr.size()-1] << endl;
                arr.pop_back();
            }
        }
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