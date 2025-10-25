#include <bits/stdc++.h>
using namespace std;
#include <cmath>  // for log()

int main() {
    int num; cin>>num;
    double result = log(num);  // log base e
    std::cout << "Natural log of " << num << " = " << result << std::endl;
    return 0;
}