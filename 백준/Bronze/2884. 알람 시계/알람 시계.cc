#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int h,m;
    cin>>h>>m;
    
    if(m-45>=0) {
        m-=45;
    }
    else if(h-1>=0) {
        h-=1;
        m=m+60-45;
    }
    else {
        h=23;
        m=m+60-45;
    }
    cout<<h<<" "<<m;
    return 0;
}