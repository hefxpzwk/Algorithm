#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin>>n;
    vector<int> vec;
    for(int i=0;i<6;i++) {
        int a;
        cin>>a;
        vec.push_back(a);
    }
    
    int t,p;
    cin>>t>>p;
    
    int tAnswer=0;
    for(auto i : vec) {
        if(i%t==0) tAnswer+=i/t;
        else tAnswer+=i/t+1;
    }
    
    int pSilentAnswer=0;
    int pAnswer=0;
    
    pSilentAnswer=n/p;
    if(n%p!=0) pAnswer = n%p;
    
    cout<<tAnswer<<"\n"<<pSilentAnswer<<" "<<pAnswer;
    return 0;
}
