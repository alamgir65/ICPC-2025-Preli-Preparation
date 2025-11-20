#include <bits/stdc++.h>
#define ll long long
using namespace std;

static const ll mod = 998244353;

ll fp(ll a, ll b)
{
    ll r = 1 % mod;
    while (b)
    {
        if (b & 1)
            r = r * a % mod;
        a = a * a % mod;
        b >>= 1;
    }
    return r;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    vector<pair<int, string>> v(t);
    int mx = 0;

    for (int i = 0; i < t; i++)
    {
        cin >> v[i].first >> v[i].second;
        mx = max(mx, v[i].first);
    }

    vector<ll> f(mx + 1), inv(mx + 1);
    f[0] = 1;

    for (int i = 1; i <= mx; i++)
        f[i] = f[i - 1] * i % mod;
    inv[mx] = fp(f[mx], mod - 2);

    for (int i = mx; i > 0; i--)
        inv[i - 1] = inv[i] * i % mod;

    auto C = [&](int n, int k)
    {
        if (k < 0 || k > n)
            return 0ll;
        return f[n] * inv[k] % mod * inv[n - k] % mod;
    };

    for (auto &p : v)
    {
        int n = p.first;
        string &s = p.second;
        int o = 0;
        for (char c : s)
            o += c == '1';
        if (o < 2)
        {
            cout << 0 << "\n";
            continue;
        }
        cout << (C(o, 2) * C(n, o + 1) % mod) << "\n";
    }
    return 0;
}