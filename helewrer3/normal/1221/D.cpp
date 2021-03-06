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
#define endl "\n"
using namespace std;


void solve(){
	ll n;
	cin >> n;
	vll a(n), b(n);
	for(ll i = 0; i < n; i++)cin>>a[i]>>b[i];
	ll dp[n][3];
	for(ll i = 0; i < n; i++)dp[i][0] = dp[i][1] = dp[i][2] = inf;
	dp[0][0] = 0;
	dp[0][1] = b[0];
	dp[0][2] = 2*b[0];
	for(ll i = 1; i < n; i++){
		for(ll j = 0; j < 3; j++){
			for(ll k = 0; k < 3; k++){
				if(a[i]+j == a[i-1]+k)continue;
				dp[i][j] = min(dp[i][j], j*b[i] + dp[i-1][k]);
			}
		}
	}
cout << min({dp[n-1][0],dp[n-1][1],dp[n-1][2]});
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.precision(20);
	ll t = 1;
	cin >> t;
	while(t--){
		solve();
		cout << endl;
	}
	cin.get();
	return 0;
}
//g++ -Wshadow -Wall -O2 -Wno-unused-result -Wno-psabi