#include <bits/stdc++.h>
using namespace std;



int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int n;
    cin>>n;
    
    vector<int> vec;
    vec.push_back(0); //0
    vec.push_back(1); //1
    vec.push_back(1); //2
    vec.push_back(2); //3
    
    int answer = 0;
    
    for(int i=4;i<=n;i++) {
        vec.push_back(vec[i-1]+vec[i-2]);
    }
    
    cout<<vec[n];
    
    
    
    
    return 0;
}