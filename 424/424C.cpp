#include<bits/stdc++.h>
using namespace std;
const int mx = INT_MAX;
const int mn = INT_MIN;
#define mod 1000000007
#define yes printf("YES\n");
#define no printf("NO\n");
#define endl "\n"


void solve(){
    long long int n;
    cin >> n;
    vector<long long int>order;
    vector<vector<long long int>>list_of_skills(n);
    vector<long long int>learned(n);
    for (int i = 0; i < n; i++) {
        long long int a, b;
        cin >> a >> b;
        a--; b--;
        if(a == -1) {
            learned[i] = 1;
            order.push_back(i);
        } else {
            list_of_skills[a].push_back(i);
            list_of_skills[b].push_back(i);
        }
    }
    for(int i = 0; i < order.size(); i++) {
        int a = order[i];
        for(auto x : list_of_skills[a]) {
            if(learned[x] == 0) {
                learned[x] = 1;
                order.push_back(x);
            }
        }
    }
    cout << order.size() << endl;
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