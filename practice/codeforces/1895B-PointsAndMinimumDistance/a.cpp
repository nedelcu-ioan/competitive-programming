/*
  (づ ￣ ³￣)づ
*/
#include "bits/stdc++.h"
#include <ext/pb_ds/assoc_container.hpp>
using ll = long long;
using ull = unsigned long long;
using lld = long double;
#define all(x) (x).begin(),(x).end()
#define rall(x) (x).begin(),(x).end()
using namespace std;
using namespace __gnu_pbds;
#define sim template < class c
#define ris return * this
#define dor > debug & operator <<
#define eni(x) sim > typename \
  enable_if<sizeof dud<c>(0) x 1, debug&>::type operator<<(c i) {
sim > struct rge { c b, e; };
sim > rge<c> range(c i, c j) { return rge<c>{i, j}; }
sim > auto dud(c* x) -> decltype(cerr << *x, 0);
sim > char dud(...);
struct debug {
#ifdef LOCAL
~debug() { cerr << endl; }
eni(!=) cerr << boolalpha << i; ris; }
eni(==) ris << range(begin(i), end(i)); }
sim, class b dor(pair < b, c > d) {
  ris << "(" << d.first << ", " << d.second << ")";
}
sim dor(rge<c> d) {
  *this << "[";
  for (auto it = d.b; it != d.e; ++it)
    *this << ", " + 2 * (it == d.b) << *it;
  ris << "]";
}
#else
sim dor(const c&) { ris; }
#endif
};
#define imie(...) " [" << #__VA_ARGS__ ": " << (__VA_ARGS__) << "] "
 
using ll = long long;
using ull = unsigned long long; 
  
signed main(int argc, char **argv, char **envp) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int t;
    cin >> t;
    while(t--) {
		
		// [x1, x2, x3, x4, ... xn]
		// [y1, y2, y3, y4, ... yn]
		// -> |x1 - x2| + ... + |xn-1 - xn|
		// -> |y1 - y2| + ... + |yn-1 - yn|
		
		int n;
		cin >> n;
		vector<int> sequence(n * 2, 0);
		vector<pair<int, int>> sol;
		
		for(int i = 0 ; i < n * 2 ; ++i) {
			cin >> sequence[i];
		}
		// debug() << imie(sequence);
		int ans = 0;
		sort(sequence.begin(), sequence.end());
		
		for (int i = 0 ; i < n ; ++i) {
			sol.push_back({sequence[i], sequence[i + n]});
		}
		
		for (int i = 0 ; i < n - 1 ; i++) {
			ans += abs(sol[i].first - sol[i + 1].first) + abs(sol[i].second - sol[i + 1].second);
		}
		
		cout << ans << "\n";
		
		for (int i = 0 ; i < n ; ++i) {
			cout << sol[i].first << " " << sol[i].second << "\n";
		}
	}
	
    return 0x0;
}

