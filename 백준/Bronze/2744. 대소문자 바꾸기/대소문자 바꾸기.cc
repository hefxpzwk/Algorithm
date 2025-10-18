#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    string str;
    cin>>str;
    
    for(int i=0;i<str.size();i++) {
        if(str[i]>=65 && str[i]<=90) str[i] = str[i]+(97-65);
        else str[i] = str[i]+(97-65)*-1;
    }
    cout<<str;
    //cout<<int('A')<<" "<<int('Z')<<" "<<int('a')<<" "<<int('b');
    return 0;
}
