#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        int n;
        cin >> n;
        int m = 2 * n;
        vector<int> a(m);
        unordered_map<int,int> cnt;
        cnt.reserve(m*2);
        for (int i = 0; i < m; ++i) {
            cin >> a[i];
            cnt[a[i]]++;
        }

        int E = 0, O = 0;
        for (auto &pr : cnt) {
            if (pr.second % 2 == 0) ++E;
            else ++O;
        }

        int best = 0;
        int kmax = min(E, n);
        for (int k = 0; k <= kmax; ++k) {
            // after choosing k even-values as (1,1),
            // we need to split O odd-values between p and q
            // ap in [L,R] where:
            int L = max(0, O - (n - k));       // ensure q_used = k + (O-ap) <= n  -> ap >= O - (n-k)
            int R = min(O, n - k);            // ensure p_used = k + ap <= n  -> ap <= n - k
            if (L > R) continue; // no possible ap

            // parity constraint: remaining slots for each side must be even
            // so p_used = k + ap must have same parity as n:
            int need_parity = (n - k) & 1; // ap %2 == (n - k) %2
            // check exist ap in [L,R] with ap%2 == need_parity
            if ( (L & 1) == need_parity ) {
                // L itself works
                best = max(best, 2*k + O);
            } else if (L + 1 <= R) {
                // next integer has opposite parity and fits
                best = max(best, 2*k + O);
            } else {
                // no ap with correct parity in interval
                continue;
            }
        }

        cout << best << '\n';
    }
    return 0;
}
