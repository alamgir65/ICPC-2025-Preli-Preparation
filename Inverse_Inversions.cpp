#include<bits/stdc++.h>
#define ll long long
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define cyes cout<<"Yes"<<endl;
#define cno cout<<"No"<<endl;
#define all(x) x.begin(), x.end()
#define choto(x) sort((x).begin(), (x).end())
#define boro(x) sort((x).rbegin(), (x).rend())
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
#define vsum(x) accumulate((x).begin(), (x).end(), 0LL)
#define fix(n, val) fixed << setprecision(n) << val
#define Alamgir ios_base::sync_with_stdio(false), cin.tie(0),cout.tie(0);
using namespace std;
//Constants
const long double pi= 3.141592653589793238;
const ll MOD=1e9+7;

//checks
ll gcd(ll a, ll b){if (b == 0)return a;return gcd(b, a % b);} //__gcd 
ll lcm(ll a, ll b){return (a/gcd(a,b)*b);}
bool isPrime(ll n){if(n<=1)return false;if(n<=3)return true;if(n%2==0||n%3==0)return false;for(int i=5;i*i<=n;i=i+6)if(n%i==0||n%(i+2)==0)return false;return true;}

void solve(){
    ll n,k; cin>>n>>k;
    vector<int> a(n+1,-1);
    vii xx,yy;
    int x=n-1,val=n,i=1;
    vii v;
    while(k>0){
        if(k>=x){
            a[i]=val;
            xx.pb(val);
            k -= x;
        }else{
            v.pb(val);
            yy.pb(val);
        }
        val--;
        i++;
        x--;
    }
    // for(int i=1;i<=n;i++) cout<<a[i]<<" ";
    // nl
    for(int i=val;i>=1;i--) yy.pb(i);
    choto(yy);
    int j=0;
    // for(int i=n;i>=1;i--){
    //     if(a[i]==-1 && j<v.size()){
    //         a[i]=v[j++];
    //     }
    // }
    // for(int i=1;i<=n;i++) cout<<a[i]<<" ";
    // nl

    for(auto u:xx) cout<<u<<" ";
    for(auto u:yy) cout<<u<<" ";
    nl
}
love{
    Alamgir
    int t=1; 
    // cin>>t;
    for(int i=1;i<=t;i++){
        solve();
    }
    return 0;    
}