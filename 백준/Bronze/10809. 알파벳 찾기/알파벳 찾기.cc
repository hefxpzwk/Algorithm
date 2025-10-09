#include <bits/stdc++.h>
#define A 97
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    string s;
    cin>>s;
    array<int, 26> arr;
    arr.fill(-1);
    for(int i=0;i<s.size();i++) {
        if(arr[s[i]-A]==-1) {
            arr[s[i]-A]=i;
        }
    }
    
    for(int i=0;i<arr.size();i++) {
        cout<<arr[i]<<" ";
    }
    return 0;
}