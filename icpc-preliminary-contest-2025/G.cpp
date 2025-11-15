#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    ll n,m; 
    cin>>n>>m;
    vector<vector<ll>> a(n, vector<ll>(m));

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    } 

    vector<ll> row(n), col(m);

    ll sum=0;

    for(int i=0;i<n;i++){
        ll xor_val = 0;
        for(int j=0;j<m;j++){
            xor_val ^= a[i][j];
        }
        row[i] = xor_val;
        sum += xor_val;
    }

    for(int j=0;j<m;j++){
        ll xor_val = 0;
        for(int i=0;i<n;i++){
            xor_val ^= a[i][j];
        }
        col[j] = xor_val;
        sum += xor_val;
    }

    ll mx = LLONG_MIN;

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            mx =max(((row[i]+col[j])-( row[i]^col[j])), mx);
        }
    }
    cout << sum - mx << "\n";
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; 
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
