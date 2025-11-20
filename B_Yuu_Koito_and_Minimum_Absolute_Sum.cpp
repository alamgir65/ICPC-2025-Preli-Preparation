#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        vector<long long> a(n);
        
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        int first_fixed = -1, last_fixed = -1;
        
        for (int i = 0; i < n; i++) {
            if (a[i] != -1) {
                if (first_fixed == -1) first_fixed = i;
                last_fixed = i;
            }
        }
        
        if (first_fixed == -1) {
            cout << 0 << "\n";
            for (int i = 0; i < n; i++) {
                cout << 0 << (i == n-1 ? "\n" : " ");
            }
            continue;
        }
        
        for (int i = 0; i < first_fixed; i++) {
            a[i] = a[first_fixed];
        }
        
        for (int i = last_fixed + 1; i < n; i++) {
            a[i] = a[last_fixed];
        }
        for (int i = first_fixed + 1; i < last_fixed; i++) {
            if (a[i] == -1) {
                int prev = i - 1;
                while (prev >= 0 && a[prev] == -1) prev--;
                int next = i + 1;
                while (next < n && a[next] == -1) next++;
                a[i] = a[prev];
            }
        }
        long long sum = a[n-1] - a[0];
        
        cout << abs(sum) << "\n";
        for (int i = 0; i < n; i++) {
            cout << a[i] << (i == n-1 ? "\n" : " ");
        }
    }
    
    return 0;
}