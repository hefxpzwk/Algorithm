#include <bits/stdc++.h>
#define NUMBER 15746
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int n;
    cin>>n;
    
    vector<bool> vec;
    vec.push_back(true);
    vec.push_back(true);
    vec.push_back(false);
    vec.push_back(true);
    vec.push_back(true);
    vec.push_back(true);
    vec.push_back(true);
    
    for(int i=7;i<=n;i++) {
        if(!vec[i-1] || !vec[i-3] || !vec[i-4]) {
            vec.push_back(true);
        }
        else vec.push_back(false);
        
    }
    if(vec[n]) cout<<"SK";
    else cout<<"CY";
    return 0;
}
