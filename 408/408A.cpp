#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, s;
    cin >> n >> s;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    if (a[0] > s) {
        cout << "No" << endl;
        return;
    }
    for (int i = 0; i < n - 1; i++) {
        if (a[i + 1] - a[i] > s) {
            cout << "No" << endl;
            return;
        }
    }
    cout << "Yes" << endl;
   

    
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