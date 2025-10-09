#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int n;
    cin>>n;
    
    unordered_set<int> us;
    for(int i=0;i<n;i++) {
        int a;
        cin>>a;
        us.insert(a);
    }
    
    int m;
    cin>>m;
    for(int i=0;i<m;i++) {
        int a;
        cin>>a;
        if(us.find(a) != us.end()) {
            cout<<1<<"\n";
        }
        else {
            cout<<0<<"\n";
        }
    }
    
    return 0;
}