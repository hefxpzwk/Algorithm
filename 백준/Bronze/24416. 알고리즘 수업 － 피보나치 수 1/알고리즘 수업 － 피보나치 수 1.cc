#include <bits/stdc++.h>
using namespace std;

/*int countt=0;

int fib(int n) {
    countt++;
    if (n == 1 || n == 2) {
        
        return 1; 
    }   
    else{
        
        return (fib(n - 1) + fib(n - 2));
        
    }
    
}
*/
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int n;
    cin>>n;
    vector<long> vec;
    vec.push_back(0);
    vec.push_back(1);
    vec.push_back(1);
    for(int i=3;i<=n;i++) {
        vec.push_back(vec[i-1]+vec[i-2]);
    }
    
    cout<<vec[n]<<" "<<n-2;//<<" "<<countt;
    
    
    
    
    return 0;
}
// 112358