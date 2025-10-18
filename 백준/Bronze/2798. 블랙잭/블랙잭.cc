#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n,m;
    cin>>n>>m;
    
    vector<int> vec;
    for(int i=0;i<n;i++) {
        int a;
        cin>>a;
        vec.push_back(a);
    }
    
    int answer=-1;
    for(int i=0;i<vec.size()-2;i++) {
        for(int j=i+1;j<vec.size()-1;j++) {
            for(int k=j+1;k<vec.size();k++) {
                if((vec[j] + vec[i] + vec[k]) == m) {
                    cout<<m;
                    return 0;
                }
                if (vec[j] + vec[i] + vec[k] <= m && vec[j] + vec[i] + vec[k] > answer)
                    answer = vec[j] + vec[i] + vec[k];

            }
        }
    }
    cout<<answer;
    
    return 0;
}
