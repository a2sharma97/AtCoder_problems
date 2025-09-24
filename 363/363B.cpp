#include<bits/stdc++.h>
using namespace std;
const int mx = INT_MAX;
const int mn = INT_MIN;
#define mod 1000000007
#define yes printf("YES\n");
#define no printf("NO\n");
#define endl "\n"
int main() {
	int totPeople,hairLength,noOfPeople;
	cin>>totPeople>>hairLength>>noOfPeople;
	vector<int>currHairLen(totPeople);
	for(int i=0;i<totPeople;i++) {
		cin>>currHairLen[i];
	}
	sort(currHairLen.begin(),currHairLen.end());
	
	if(currHairLen[totPeople-noOfPeople]>=hairLength) {
		cout<<0;
	}
	else {
		cout<<hairLength-currHairLen[totPeople-noOfPeople];
	}
}