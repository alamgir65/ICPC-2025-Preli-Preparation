#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pii pair<int,int>
#define out(x) cout << x << '\n'
#define out2(x,y) cout << x << " " << y << '\n'

void solve() {
    int n;
    cin >> n;
    vector<pii> deg(n);
    for (int i = 0; i < n; i++) {
        cin >> deg[i].first;
        deg[i].second = i + 1;
    }

    // Max heap based on degree
    priority_queue<pii> pq;
    for (auto &p : deg)
        if (p.first > 0)
            pq.push(p);

    vector<pii> ans;

    while (!pq.empty()) {
        auto [d, i] = pq.top(); pq.pop();
        if (d > pq.size()) {
            out("IMPOSSIBLE");
            return;
        }

        vector<pii> temp;
        for (int k = 0; k < d; k++) {
            auto [d2, j] = pq.top(); pq.pop();
            ans.push_back({i, j});
            if (--d2 > 0)
                temp.push_back({d2, j});
        }
        for (auto &p : temp)
            pq.push(p);
    }

    out(ans.size());
    for (auto &p : ans)
        out2(p.first, p.second);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    // cin >> t;
    while (t--) solve();
}
