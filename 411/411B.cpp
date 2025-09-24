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
  vector<int>arr(n - 1);
  for(int i = 0; i < n - 1; i++) {
    cin >> arr[i];
  }
  for(int i = 0; i < n - 1; i++) {
  int prev = 0;
    for(int j = i; j < n - 1; j++) {
      prev += arr[j];
      cout << prev << " ";
    }
    cout << endl;
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