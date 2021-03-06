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
	ll n, k;
	cin >> n >> k;
	vll a(n);
	for(auto &it:a)cin >> it;
	ll ans = 0, i = 0;
	vll b = a;
	while(1){
		if(b[i]%k == 0){
			ans += a[i];
			b[i] /= k;
		}
		else{
			for(auto it:a)ans += it;
			break;
		}
		i++;
		i%=n;
	}
	cout << ans;
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
  return 0;
}