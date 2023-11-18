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
    
    ull n;
    cin >> n;
    vector<ull> sequence(n, 0);
    
    for (ull& it : sequence) {
		cin >> it;
	}
    
    debug() << imie(sequence);
    
    ull ans = 0;
    /// asta e minima so far o sa ii fac update pe parcurs 
    /// din un array de genul [3 , 2, 3, 4]
    /// trebuie sa fac -> [3, 3, 3, 4] (ca niste trepte) 
    /// in current_minima tin valoarea de jos a tretei
    /// __________#
    ///	#  x 	# #
    /// #  #    # #
    /// #  #    # #
    
    ull current_minima = sequence[0];
    
    for (ull i = 1 ; i < n ; ++i) {
		if (sequence[i] < current_minima) {
			ans += current_minima - sequence[i];
			const ull x = current_minima - sequence[i];
			debug() << imie(x);
		}
		else {
			if (sequence[i] >= current_minima) {
				current_minima = sequence[i];
			}
		}
		debug() << imie(current_minima);
	}
	
	cout << ans << endl;
    
    return 0x0;
}

