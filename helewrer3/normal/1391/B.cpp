//g++ -std=c++17 -Wshadow -Wall -O2 -Wno-unused-result -Wno-psabi
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

ll n, m;

void input(){
	cin >> n >> m;
}

void solve(){
	char ch;
	ll ans = 0;
	for(ll i = 0; i < n; i++)
		for(ll j = 0; j < m; j++){
			cin >> ch;
			if(i == n-1)ans += ch != 'R';
			if(j == m-1)ans += ch != 'D';
		}
	cout << ans-2 << endl;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.precision(20);
	ll t;
	t = 1;
	cin >> t;
	while(t--){
		input();
		solve();
	}
	cin.get();
	return 0;
}