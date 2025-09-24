#include<bits/stdc++.h>
using namespace std;
const int mx = INT_MAX;
const int mn = INT_MIN;
#define mod 1000000007
#define yes printf("YES\n");
#define no printf("NO\n");
#define endl "\n"


void solve(){
    int n, m;
    cin >> n >> m;
    vector<vector<char>>vec(n, vector<char>(m));
    vector<char>ans;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> vec[i][j];
        }
    }
    for(int i = 0 ; i < m; i++) {
        int one = 0, zero = 0;
        for(int j = 0; j < n; j++) {
            if(vec[j][i] == '1') {
                one++;
            } else {
                zero++;
            }
        }
        if(one < zero || one == n) {
            ans.push_back('1');
        } else if(zero < one || zero == n) {
            ans.push_back('0');
        } 
    }
    vector<int>player(n);
    
        for(int k = 0,i = 0; k < m; k++,i++) {
            for(int l = 0; l < n; l++) {
                if(vec[l][k] == ans[i]) {
                    player[l]++;
                    
                }
            }
        }
    
    
    int high_score = *max_element(player.begin(), player.end());
    for(int i = 0; i < n; i++) {
        if(player[i] == high_score) {
            cout << i + 1 << " ";
        }
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