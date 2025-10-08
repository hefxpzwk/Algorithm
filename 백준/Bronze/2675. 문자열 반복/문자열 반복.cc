#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int n;
    cin>>n;
    
    for(int i=0;i<n;i++) {
        int r;
        string s;
        cin>>r>>s;
        for(int j=0;j<s.size();j++) {
            for(int k=0;k<r;k++) {
                cout<<s[j];
            }
        }
        cout<<"\n";
    }
    return 0;
}