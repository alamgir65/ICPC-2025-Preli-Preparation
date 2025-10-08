#include<bits/stdc++.h>
#define ll long long
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define cyes cout<<"Yes"<<endl;
#define cno cout<<"No"<<endl;
#define all(x) x.begin(), x.end()
#define nl cout<<endl;
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
#define Alamgir ios_base::sync_with_stdio(false), cin.tie(0),cout.tie(0);
using namespace std;
void solve(){
    int n; cin>>n;
    vii a(n);
    vector<pii> v;
    for(int i=0;i<n;i++) cin>>a[i],v.pb({a[i],i+1});
    sort(v.rbegin(),v.rend());


    // for(auto u: v){
    //     cout<<u.first<<" "<<u.second<<endl;
    // }
    // return;

    vii p;
    for(int i = 1; i <= n; i++) {
        if (i != v[i-1].second && find(all(p), v[i-1].second) == p.end()) {
            // If i is NOT the same as v[i-1].second AND not already in p
            p.pb(v[i-1].second);
            cout<<"From condition "<<v[i-1].second<<endl;
        }
        else {
            int j = i;
            while ((j < n) && (i == v[j].second || find(all(p), i) != p.end())) {
                j++;
            }
            if (j < n){
                p.pb(v[j].second);
                cout<<"From loop "<<v[j].second<<endl;
            }
        }
    }
    for(int i=1;i<=n;i++){
        if(find(all(p), i) == p.end()){
            p.pb(i);
        }
    }
    for(auto x:p) cout<<x<<" ";
    nl
}
love{
    Alamgir
    int t=1; 
    cin>>t;
    for(int i=1;i<=t;i++){
        solve();
    }
    return 0;    
}