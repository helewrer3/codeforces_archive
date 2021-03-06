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
	string s;
	cin >> s;
	vll a(n+1, 0);
	ll t = 0;
	for(ll i = 0; i < n; i++){
		a[i] = t;
		if(s[i] == '1')t++;
		else t--;
	}
	a[n] = t;
	map<ll, vll> mp;
	for(ll i = 0; i <= n; i++)mp[a[i]].pb(i);
	ll ans = 0;
	for(auto it:mp){
		ans = max(ans, abs(it.s[0] - it.s[sz(it.s)-1]));
	}
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