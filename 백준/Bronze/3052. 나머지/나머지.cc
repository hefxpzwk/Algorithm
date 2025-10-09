#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    unordered_set<int> us;
    
    for(int i=0;i<10;i++) {
        int a;
        cin>>a;
        us.insert(a%42);
    }
    cout<<us.size();
    return 0;
}