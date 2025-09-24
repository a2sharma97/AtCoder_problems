#include<bits/stdc++.h>
using namespace std;
const int mx = INT_MAX;
const int mn = INT_MIN;
#define mod 1000000007
#define yes printf("YES\n");
#define no printf("NO\n");
#define endl "\n"


void solve(){
    long long int n, cnt = 0;
    cin >> n;
    vector<long long int>arr(n),arr2(n);
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
        arr2[i] = arr[i];
    }
    bool flag = true;
    sort(arr2.begin(), arr2.end());
    for(int i = 0; i < n - 1; i++) {
        if((arr2[i + 1] + 1) / 2 <= arr2[i]) {
            if(arr2[i] != arr[i]) {
                cnt++;
            }
        } else {
            flag = false;
        }
    }
    if(flag) {
        cout << cnt << endl;
    } else {
        cout << -1 << endl;
    }
}


signed main()
{
	ios::sync_with_stdio(false);
    cin.tie(NULL);  cout.tie(NULL);                     
    int t=1;
    cin>>t;
    for(int i=1;i<=t;i++){
    	solve();
    }
}