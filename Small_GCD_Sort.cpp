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
int gcd(int a, int b) {
    if (b == 0)
        return a; 
    return gcd(b, a % b);  
}
void solve(){
    int n; cin>>n;
    vector<pii> v;
    for(int i=1;i<=n;i++){
        v.pb({gcd(i,n),i});
    }
    sort(v.begin(), v.end(), [](const pii &a, const pii &b) {
        if (a.first != b.first)
            return a.first > b.first;
        return a.second < b.second;
    });
    for (auto u : v)
        cout << u.second<<" ";
    nl
    /// hudai edi kore lav ache?
    
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