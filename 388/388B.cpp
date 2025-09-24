#include<bits/stdc++.h>
using namespace std;
const int mx = INT_MAX;
const int mn = INT_MIN;
#define mod 1000000007
#define yes printf("YES\n");
#define no printf("NO\n");
#define endl "\n"


void solve(){
    long long int snakes, length;
    cin >> snakes >> length;
    vector<long long int>thick(snakes), len(snakes);
    for(int i = 0; i < snakes; i++) {
        cin >> thick[i] >>len[i];
    }
    for (int k = 1; k <= length; k++) {
        long long int heaviest_snake = 0;
        for(int j = 0; j < snakes; j++) {
            
            heaviest_snake = max(heaviest_snake, thick[j] * (len[j] + k));
        }
        cout << heaviest_snake << endl;
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