#include <bits/stdc++.h>
#define A 97
using namespace std;

int check() {
    string s;
    cin>>s;
    int temp=0;
    int answer=0;
    for(int i=0;i<s.size();i++) {
        if(s[i]=='X'){
            temp=0;
        }
        else if(s[i]=='O') {
            temp++;
            answer+=temp;
        }
    }
    return answer;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int n;
    cin>>n;
    for(int i=0;i<n;i++) {
        cout<<check()<<"\n";
    }
    return 0;
}