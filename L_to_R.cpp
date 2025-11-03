#include <bits/stdc++.h>
#define ll long long
#define yes cout << "YES\n";
#define no cout << "NO\n";
#define cyes cout << "Yes\n";
#define cno cout << "No\n";
#define all(x) x.begin(), x.end()
#define choto(x) sort((x).begin(), (x).end())
#define boro(x) sort((x).rbegin(), (x).rend())
#define nl cout << '\n';
#define endl '\n'
#define love int main()
#define vtr vector
#define pii pair<int,int>
#define out(x) cout << x << '\n';
#define out2(x,y) cout << x << " " << y << '\n';
#define vii vector<int>
#define vll vector<ll>
#define imax INT_MAX
#define imin INT_MIN
#define pb push_back
#define vsum(x) accumulate((x).begin(), (x).end(), 0LL)
#define fix(n, val) fixed << setprecision(n) << val
#define Alamgir ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;

// Constants
const long double pi = 3.141592653589793238;
const ll MOD = 1e9 + 7;

// Checks
ll gcd(ll a, ll b) { return (b == 0 ? a : gcd(b, a % b)); }
ll lcm(ll a, ll b) { return (a / gcd(a, b) * b); }

void solve() {
    int n; 
    cin >> n;
    vii a(n), zero;
    
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] == 0) zero.pb(i);
    }

    int q; 
    cin >> q;
    while (q--) {
        int l, r; 
        cin >> l >> r;
        l--, r--;

        auto it = lower_bound(zero.begin(), zero.end(), l);
        if (it != zero.end() && *it <= r){
            out(0)
        }
        else{
            out(1)
        }
    }
}

love {
    Alamgir
    int t = 1;
    // cin >> t;
    while (t--) solve();
    return 0;
}
