/*May The Force Be With Me*/
#include <bits/stdc++.h>
#include <stdio.h>
#include <ctype.h>
#define ll long long
#define MOD 1000000007
#define endl "\n"
#define vll vector<long long>
#define pll pair<long long, long long>
#define all(c) c.begin(),c.end()
#define pb push_back
#define f first
#define s second
#define inf INT_MAX
#define size_1d 10000000
#define size_2d 1000
//Snippets: graph, segtree, delta, sieve, fastexp

using namespace std;

ll n;
ll arr[size_1d];

void Input() {
	cin >> n;
	for (ll i = 0; i < n; i++)
		cin >> arr[i];
}

void Solve() {
	map<ll, ll> mp;

	for (ll i = 1; i <= 2 * n; i++) {
		mp[i] = 1;
	}

	ll ans[2 * n] = {0};
	for (ll i = 0; i < n; i++) {
		mp[arr[i]] = 0;
		ans[2 * i] = arr[i];
	}

	for (ll i = 0; i < 2 * n; i ++) {
		if (ans[i] == 0) {
			ll t = ans[i - 1];
			for (ll j = 1; j <= 2 * n; j++) {
				if (j > t and mp[j]) {
					ans[i] = j;
					mp[j] = 0;
					break;
				}
			}
		}
	}
	for (ll i = 0; i < 2 * n; i++)
		if (ans[i] == 0) {
			cout << "-1\n";
			return;
		}
	for (ll i = 0; i < 2 * n; i++) {
		cout << ans[i] << " ";
	}
	cout << endl;

}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	ll T = 1;
	cin >> T;
	//ll t = 1;
	while (T--) {
		Input();
		//cout << "Case " << t << ": ";
		Solve();
		//t++;
	}
	return 0;
}