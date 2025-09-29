#include<bits/stdc++.h>
using namespace std;
const int mx = INT_MAX;
const int mn = INT_MIN;
#define mod 1000000007
#define yes printf("YES\n");
#define no printf("NO\n");
#define endl "\n"


void solve(){
    long long int n, r;
    cin >> n >> r;
    vector<long long int>door(n);
    for(int i = 0; i < n; i++) {
        cin >> door[i];
        
    }
   
    long long int x = -1 , y = -1;
    for(int i = 0; i < n; i++) {
        if(door[i] == 0) {
            x = i;
            break;
        }
    }
     for(int i = n - 1; i >= 0; i--) {
        if(door[i] == 0) {
            y = i;
            break;
        }
    }
    long long int oper = 0;
    if(x == -1 || y == -1) {
        cout << oper << endl;
        return;
    }
    if((x < r && y < r)) {
        for(int i = x; i < r  ; i++) {
            if(door[i] == 1) {
                oper += 2;
            } else {
                oper += 1;
            }
        }
    } else {
        if((r < x && r < y) || x == y) {
            for(int i = r; i <= y  ; i++) {
                if(door[i] == 1) {
                    oper += 2;
                } else {
                    oper += 1;
                }
            }
        } else {
            for(int i = x; i < r  ; i++) {
                if(door[i] == 1) {
                    oper += 2;
                } else {
                    oper += 1;
                }
            }
            for(int i = r; i <= y  ; i++) {
                if(door[i] == 1) {
                    oper += 2;
                } else {
                    oper += 1;
                }
            }
            
        }
    }
    cout << oper << endl;
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