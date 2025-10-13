#include <bits/stdc++.h>
#define NUMBER 10007
using namespace std;


int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int n;
    cin>>n;
    
    vector<int> vec;
    
    vec.push_back(1);
    vec.push_back(2);
    
    for(int i=2;i<n;i++) {
        vec.push_back((vec[i-2]+vec[i-1])%NUMBER);
    }
    cout<<vec[n-1];
    return 0;
}
/*

1 1
2 2
3 3
4 5

*/