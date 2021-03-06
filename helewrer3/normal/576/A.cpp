/*May The Force Be With Me*/
#include <bits/stdc++.h>
#include <stdio.h>
#include <ctype.h>
#pragma GCC optimize ("Ofast")
#define ll long long
#define MOD 1000000007
#define endl "\n"
#define vll vector<long long>
#define mll map<long long,long long>
#define pll pair<long long, long long>
#define all(c) c.begin(),c.end()
#define rall(c) c.rbegin(),c.rend()
#define pb push_back
#define f first
#define s second
#define inf INT_MAX
#define size_1d 10000000
#define size_2d 1000
//Snippets: delta, sieve, fastexp, dfs, bfs, dijkstra, floodfill

using namespace std;

ll n;

void Input() {
	cin >> n;
}

vector<ll> arr_sieve;
void Sieve(ll lim) {
	arr_sieve.resize(lim);
	fill(all(arr_sieve), 1);
	arr_sieve[0] = arr_sieve[1] = 0;
	for (ll i = 2; i * i <= lim; i++) {
		if (arr_sieve[i])
			for (ll j = i * i; j <= lim; j += i)
				arr_sieve[j] = 0;
	}
}

void Solve() {
	Sieve(1000);
	vll b;
	for (ll i = 2; i <= n; i++) if (arr_sieve[i]) for (ll j = i; j <= n; j *= i)b.pb(j);
	cout << b.size() << endl;
	for (auto it : b)cout << it << " ";
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	ll T = 1;
	//cin >> T;
	//ll t = 1;
	while (T--) {
		Input();
		//cout << "Case " << t << ": ";
		Solve();
		//t++;
	}
	return 0;
}