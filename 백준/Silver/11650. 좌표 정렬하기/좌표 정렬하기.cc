#include <bits/stdc++.h>
using namespace std;

bool cmp(pair<int,int> a,pair<int,int> b) {
    if(a.first == b.first) return a.second < b.second;
    else {
        return a.first < b.first;
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin>>n;
    
    vector<pair<int,int>> vec;
    for(int i=0;i<n;i++) {
        int a,b;
        cin>>a>>b;
        vec.push_back({a,b});
    }
    
    
    sort(vec.begin(),vec.end(),cmp);
    for(auto i : vec) cout<<i.first<<" "<<i.second<<"\n";
    return 0;
}
