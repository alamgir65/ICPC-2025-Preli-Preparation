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
    
    int n; cin>>n;
    vii a(n), b(n);
    int aji_one=0,aji_opp =0,mai_one = 0,mai_opp=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]==1) aji_one++;
    }
    for(int i=0;i<n;i++){
        cin>>b[i];
        if(b[i]==1) mai_one++;
    }
    for(int i=0;i<n;i++){
        if(i%2==1 && a[i]!=b[i]) mai_opp++;
        else if(i%2 == 0 && a[i]!=b[i]) aji_opp++;
    }

    int aji=0,sai=0;
    for(int i=0;i<n;i++){
        aji ^= a[i];
        sai ^= b[i];
        if(i%2==0 && aji==0 && a[i]!=b[i]){
            aji = 1;
        }else if(i%2==1 && sai==0 && a[i]!=b[i]){
            sai = 1;
        }
    }

    if(aji > sai) out("Ajisai")
    else if(sai > aji) out("Mai")
    else out("Tie")

    // if(aji_one%2 == mai_one%2){
    //     if(aji_opp > mai_opp){
    //         out("Ajisai")
    //     }else if(mai_opp > aji_opp){
    //         out("Mai")
    //     }else out("Tie")
    // }
    // else{
    //     if(((aji_one%2)+aji_opp) == ((mai_one%2)+mai_opp)){
    //         if(aji_one%2) out("Ajisai")
    //         else if(mai_one%2) out("Mai")
    //         else out("Tie")
    //     }
    //     else if(((aji_one%2)+aji_opp) > ((mai_one%2)+mai_opp)) out("Ajisai")
    //     else if(((aji_one%2)+aji_opp) < ((mai_one%2)+mai_opp)) out("Mai")
    //     else out("Tie")
    // }

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