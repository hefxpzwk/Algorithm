#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int n;
    cin>>n;
    
    
    vector<int> vec;
    vec.push_back(0);
    vec.push_back(0);
    vec.push_back(0);
    vec.push_back(1);
    vec.push_back(1e9);
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(1e9);
    
    for(int i=8;i<=n;i++) {
        vec.push_back(min(vec[i-3],vec[i-5])+1);
    }
    
    if(vec[n]==1e9) cout<<-1;
    else cout<<vec[n];
    
    return 0;
}