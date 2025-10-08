#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int max=0;
    int index;
    for(int i=1;i<=9;i++) {
        int a;
        cin >> a;
        if(max < a) {
            max = a;
            index = i;
        }
    }
    cout << max << "\n";
    cout << index;
    
    
    return 0;
}