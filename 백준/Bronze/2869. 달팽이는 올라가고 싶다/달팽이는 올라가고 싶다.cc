#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int a,b,v;
    cin>>a>>b>>v;
    cout<<((v-a+a-b-1)/(a-b)+1);
    return 0;
}
//215