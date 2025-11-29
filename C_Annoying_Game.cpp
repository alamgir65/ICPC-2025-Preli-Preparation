#include<bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
#define endl '\n'
#define love int main()
#define vll vector<ll>
#define out(x) cout<<x<<'\n'
#define Alamgir ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
using namespace std;

ll maxSubarraySum(const vll &a){
    ll cur=a[0], best=a[0];
    for(size_t i=1;i<a.size();++i){
        cur = max(a[i], cur + a[i]);
        best = max(best, cur);
    }
    return best;
}

love{
    Alamgir
    int t; if(!(cin>>t)) return 0;
    while(t--){
        int n; ll k; cin>>n>>k;
        vll a(n), b(n);
        for(int i=0;i<n;i++) cin>>a[i];
        ll maxb = 0;
        for(int i=0;i<n;i++){ cin>>b[i]; maxb = max(maxb, b[i]); }
        ll base = maxSubarraySum(a);
        if(maxb == 0) out(base);
        else {
            if(k % 2 == 1) out(base + maxb);
            else out(base);
        }
    }
    return 0;
}
