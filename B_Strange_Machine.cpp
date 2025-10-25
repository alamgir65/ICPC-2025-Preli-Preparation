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
    int n,q; cin>>n>>q;
    string s; cin>>s;
    vii a(n);
    int B=0,A=0;
    for(char x:s) if(x=='B') B++;
    A = n-B;
    for(int i=0;i<q;i++){
       int x; cin>>x;
       if(B==0){
            out(x)
            continue;
       }
       int time=0,j=0;
       while(x){
            j %= n;
            if(s[j]=='A') x--;
            else x/=2;
            j++;
            time++;
       }
       out(time)
    }

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