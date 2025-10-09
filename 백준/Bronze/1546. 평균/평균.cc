#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int n;
    cin>>n;
    
    double sum = 0;
    vector<double> vec;
    int maxx=0;
    for(int i=0;i<n;i++) {
        int a;
        cin>>a;
        vec.push_back(a);
        maxx=max(maxx,a);
    }
    for(int i=0;i<n;i++) {
        vec[i] = vec[i]/maxx*100;
    }
    for(auto i:vec) sum+=i;
    
    cout<<sum/n;
    return 0;
}