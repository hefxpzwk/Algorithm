#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int n;
    cin>>n;
    queue<int> q;
    for(int i=0;i<n;i++) {
        string s;
        cin>>s;
        if(s == "push") {
            int a;
            cin>>a;
            q.push(a);
        }
        else{
            if(s=="pop") {
                if(q.empty()) cout<<"-1";
                else {
                    cout<<q.front();
                    q.pop();
                }
            
            }
            else if(s=="size") cout<<q.size();
            else if(s=="empty") cout<<(q.empty() ? 1 : 0);
            else if(s=="front") {
                if(q.empty()) cout<<"-1";
                else cout<<q.front();
            }
            else if(s=="back") {
                if(q.empty()) cout<<"-1";
                else cout<<q.back();
            }
            cout<<"\n";
        }
        
    }
    
    return 0;
}