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
    int n,k; cin>>n>>k;
    string s; cin>>s;
    int top=0,bottom=n-1;
    if(n==k){
        string x(n,'-');
        out(x)
        return;
    }
    string ans(n,'+');
    int cnt=0;
    for(auto x:s){
        if(x == '0'){
            ans[top++] = '-';
        }else if(x=='1') {
            ans[bottom--]='-';
        }else{
            cnt++;
        }
    }
    while(cnt--){
        if(top > bottom) break;
        ans[top++]='?';
        ans[bottom--]='?';
    }
    out(ans)
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