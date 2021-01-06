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
	vll a(n);
	map<ll, vll> mp;
	for(ll i = 0; i < n; i++){cin>>a[i]; mp[a[i]].pb(i);}
	ll ans = inf;
	for(auto it:mp){
		ll tans = 0;
		for(ll i = 0; i < sz(it.s); i++){
			if(i == 0){
				if(it.s[i] != 0)tans++;
			}
			if(i == sz(it.s)-1){
				if(it.s[i] != n-1)tans++;
			}
			if(i and it.s[i] != it.s[i-1]+1)tans++;
		}
		ans = min(ans, tans);
	}
	cout<<ans;
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