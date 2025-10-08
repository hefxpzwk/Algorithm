#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int n;
    cin>>n;
    
    int minn = 1e9, maxx = -1e9;
    for(int i=0;i<n;i++) {
        int a;
        cin>>a;
        minn = min(minn,a);
        maxx = max(maxx,a);
    }
    cout<<minn<<"\n"<<maxx;
    return 0;
}