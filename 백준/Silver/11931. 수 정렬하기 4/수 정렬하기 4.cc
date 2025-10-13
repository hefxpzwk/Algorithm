#include <bits/stdc++.h>
using namespace std;


int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int t;
    cin>>t;
    
    
    vector<int> vec;
    for(int i=0;i<t;i++) {
        int a;
        cin>>a;
        vec.push_back(a);
    }
    
    sort(vec.begin(), vec.end());
    reverse(vec.begin(), vec.end());
    for(auto i : vec) {
        cout<<i<<"\n";
    }
    
    return 0;
}