//May the force be with me
#include "bits/stdc++.h"
#define f first
#define s second
#define inf 1e18
#define ll long long
#define mod 1000000007
#define pb emplace_back
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
	vll dp(n+1, 0), a(n+1, 0);
	for(ll i = 1; i <= n; i++)cin >> a[i];
	for(ll i = 1; i <= n; i++){
		for(ll j = a[i]; j < i; j++)dp[i]=(dp[i]+dp[j])%mod;
		dp[i]=(dp[i]+2)%mod;
	}
	ll ans = 0;
	for(ll i = 1; i <= n; i++)ans=(ans+dp[i])%mod;
	cout<<ans;
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