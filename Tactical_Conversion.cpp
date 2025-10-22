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
    int n,cnt=0; cin>>n;
    string s; cin>>s;
    bool flag = true;
    int tmp=0,mx=imin;
    for(int i=0;i<n-1;i++){
        if(s[i]==s[i+1] && s[i]=='1'){
            if(flag){
                cnt++;
                flag=false;
                tmp=2;
            }else tmp++;
            mx=max(mx,tmp);
        }else{
            flag=true;
            tmp=0;
        }
    }
    if(cnt==1 && mx<4) cno
    else cyes
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