#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int n;
    cin>>n;
    
    string s;
    cin>>s;
    
    int answer = 0;
    for(int i=0;i<s.size();i++) {
        answer += s[i]-'0';
    }
    
    cout<<answer;
    return 0;
}