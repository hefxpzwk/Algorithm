#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int n;
    cin>>n;
    
    stack<int> st;
    
    for(int i=0;i<n;i++) {
        string s;
        cin>>s;
        if(s=="push"){
            int a;
            cin>>a;
            st.push(a);
        }
        else{
            if(s=="top") {
                if(st.empty()) cout<<-1;
                else cout<<st.top();
            }
            else if(s=="size") cout<<st.size();
            else if(s=="empty") cout<<st.empty();
            else if(s=="pop") {
                if(st.empty()) cout<<-1;
                else {
                    cout<<st.top();
                    st.pop();
                }
            }
            cout<<"\n";
        }
    }
    
    return 0;
}