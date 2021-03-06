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
	vll a(n), dp(n+1, 0);
	dp[0] = 1;
	for(auto &it:a)cin>>it;
	for(ll i = 0; i < n; i++){
		vll b;
		for(ll j = 1; j*j <= a[i]; j++){
			if(a[i]%j == 0){
				b.pb(j);
				if(j != a[i]/j)b.pb(a[i]/j);
			}
		}
		sort(rall(b));
		for(auto it:b){
			if(it <= i+1)dp[it] = (dp[it] + dp[it-1])%mod;
		}
	}
	ll ans = 0;
	for(ll i = 1; i <= n; i++)ans = (ans + dp[i])%mod;
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