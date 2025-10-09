#include <bits/stdc++.h>
#define A 97
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    array<int, 8> arr;
    
    for(int i=0;i<8;i++) {
        cin>>arr[i];
    }
    if(is_sorted(arr.begin(), arr.end())){
        cout<<"ascending";
    }
    else if(is_sorted(arr.rbegin(), arr.rend())) {
        cout<<"descending";
    }
    else {
        cout<<"mixed";
    }
    return 0;
}