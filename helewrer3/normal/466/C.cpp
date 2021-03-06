//May the force be with me
#include "bits/stdc++.h"
#define f first
#define s second
#define inf 1e18
#define ll long long
#define mod 1000000007
#define pb push_back
#define vll vector<long long int>
#define ull unsigned long long
#define all(a) a.begin(),a.end()
#define rall(a) a.rbegin(),a.rend()
#define sz(x) ((long long int)(x).size())
#define mll map<long long int, long long int>
#define pll pair<long long int, long long int>
using namespace std;


void solve(){
	ll n;
	cin >> n;
	vll a(n);
	for(auto &it:a)cin >> it;
	ll s = 0;
	for(auto it:a)s+=it;
	if(s%3 or n < 3) cout << 0;
	else{
		s/=3;
		ll ss = 0, dp[2] = {0};
		for(ll i = 0; i < n-1; i++){
			ll it = a[i];
			ss += it;
			if(ss == 2*s)dp[1] += dp[0];
			if(ss == s)dp[0]++;
		}
		cout<<dp[1];
	}
}


int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.precision(20);
	ll t = 1;
	//cin >> t;
	while(t--){
		solve();
		cout << endl;
	}
	cin.get();
	return 0;
}
//g++ -Wshadow -Wall -O2 -Wno-unused-result -Wno-psabi