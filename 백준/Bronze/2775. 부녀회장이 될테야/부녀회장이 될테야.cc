#include <bits/stdc++.h>
using namespace std;


int check(int k, int n) {
    int answer;
    
    vector<vector<int>> vec;
    
    vec.push_back(vector<int>());
    for(int i=0;i<=n;i++) {
        vec[0].push_back(i);
    }
    for(int i=1;i<=k;i++) {
        vec.push_back(vector<int>());
        for(int j=0;j<=n;j++) {
            int add=0;
            for(int q=0;q<=j ;q++) {
                add+=vec[i-1][q];
            }
            vec[i].push_back(add);
        }
    }
    answer=vec[k][n];
    return answer;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int t;
    cin>>t;
    
    for(int i=0;i<t;i++) {
        int k,n;
        cin>>k>>n;
        cout<<check(k,n)<<"\n";
    }
    
    return 0;
}