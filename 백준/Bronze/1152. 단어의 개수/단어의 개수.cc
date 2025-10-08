#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    string s;
    getline(cin,s);
    
    int answer = 0;
    
    for(int i=0;i<s.size();i++) {
        if(s[i]==' ') {
            answer++;
        }
    }
    if(s[0]!=' ') {
        answer++;
    }
    if(s[s.size()-1]==' '){
        answer--;
    }
    cout<<answer;
    
    
    return 0;
}