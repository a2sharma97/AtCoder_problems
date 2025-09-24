#include<bits/stdc++.h>
using namespace std;
const int mx = INT_MAX;
const int mn = INT_MIN;
#define mod 1000000007
#define yes printf("YES\n");
#define no printf("NO\n");
#define endl "\n"


void solve(){
    deque<pair<int, int>>dq;
    int q;
    cin >> q;
    while(q--) {
        int op, c, x;
        cin >> op;
        if(op == 1) {
             cin >> c >> x;
            dq.push_back(make_pair(c, x));
        } else {
            cin >> x;
            long long int sum = 0;
            while(x) {
                if(dq[0].first > x){
                    dq[0].first -= x;
                    sum += 1ll *x * dq[0].second;
                    break;
                } 
                    sum += 1ll * dq[0].first * dq[0].second;
                    x -= dq[0].first;
                    dq.pop_front();
                
            }
                cout << sum << endl;
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