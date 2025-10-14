#include <bits/stdc++.h>
using namespace std;

int answer(int a) {
    int ans=0;
    vector<int> vec;
    
    vec.push_back(1);
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(4);
    
    for(int i=4;i<=a;i++) {
        vec.push_back(vec[i-1]+vec[i-2]+vec[i-3]);
    }
    ans = vec[a];
    return ans;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int T;
    cin>>T;
    
    for(int i=0;i<T;i++) {
        int a;
        cin>>a;
        cout<<answer(a)<<"\n";
    }
    
    return 0;
}
