#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int n;
    cin>>n;
    
    vector<int> vec;
    vec.push_back(-1);
    vec.push_back(-1);
    vec.push_back(1);
    vec.push_back(-1);
    vec.push_back(2);
    vec.push_back(1);
    
    for(int i=6;i<=n;i++) {
        if(vec[i-2]==-1) {
            if(vec[i-5]==-1) {
                vec.push_back(-1);
            }
            else {
                vec.push_back(vec[i-5]+1);
            }
        }
        else {
            if(vec[i-5]==-1){
                vec.push_back(vec[i-2]+1);
            }
            else {
                vec.push_back(min(vec[-2],vec[i-5])+1);
            }
        }
        
    }
    cout<<vec[n];
    return 0;
}

/*


1   -1

2   1(2)

3   -1

4   2(22)

5   1(5)

6   3(222)

7   2(52)

8   4(2222)




*/