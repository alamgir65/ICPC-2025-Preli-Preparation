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


vector<pii> dir = {{0,1},{0,-1},{1,0},{-1,0}};
vector<vector<bool>> visited;
vector<vector<char>> adj;
int n, m;

bool isValid(int i, int j) {
    return (i >= 0 && i < n && j >= 0 && j < m);
}

void solve(){
    
    cin>>n>>m;
    adj.assign(n, vector<char>(m));
    visited.assign(n, vector<bool>(m, false));

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> adj[i][j];
        }
    }

    queue<pii> q;
    vector<vii> dist(n, vector<int>(m, -1));

    for(int i = 0; i < n; i++) {
        if(adj[i][0] != '#'){
            q.push({i,0});
            dist[i][0]=0;
            visited[i][0] = true;
        }
        if(adj[i][m-1] != '#'){
            q.push({i,m-1});
            dist[i][m-1]=0;
            visited[i][m-1] = true;
        }
    }
    for(int j = 0; j < m; j++) {
        if(adj[0][j] != '#'){
            q.push({0,j});
            dist[0][j]=0;
            visited[0][j] = true;
        }
        if(adj[n-1][j] != '#'){
            q.push({n-1,j});
            dist[n-1][j]=0;
            visited[n-1][j] = true;
        }
    }

    int ans = -1;
    while(!q.empty()){
        int x = q.front().first, y= q.front().second;
        q.pop();

        if(adj[x][y] == 'U'){
            ans = dist[x][y];
            break;
        }

        for(auto d:dir){
            int nx=x+d.first, ny = y+d.second;

            if(isValid(nx, ny) && !visited[nx][ny] && adj[nx][ny] != '#') {
                visited[nx][ny] = true;
                dist[nx][ny] = dist[x][y] + 1;
                q.push({nx,ny});
            }
        }
    }

    out(ans)
}
love{
    Alamgir
    int t=1; 
    for(int i=1;i<=t;i++){
        solve();
    }
    return 0;    
}
