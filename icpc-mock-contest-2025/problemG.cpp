#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin>>t;
    while(t--){
        string s; cin>>s;
        int a = s.size(), b = s.size();
        for(int i=0;i<a;i++){
            if(s[i] == '\\' && i+1 < a && s[i+1] == '0'){
                b = i;
                break;
            }
        }
        cout<<a<<" "<<b<<endl;
    }
    return 0;
}