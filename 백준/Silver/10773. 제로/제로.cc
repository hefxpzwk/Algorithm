#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int n;
    cin>>n;
    
    vector<int> vec;
    stack<int> st;
    for(int i=0;i<n;i++) {
        int a;
        cin>>a;
        if(a!=0) {
            st.push(a);
        }
        else {
            if(st.empty()) {
                st.push(0);
            }
            else {
                st.pop();
            }
        }
        
    }
    
    int answer=0;
    int t = st.size();
    for(int i=0;i<t;i++) {
        answer += st.top();
        st.pop();
    }
    cout<<answer;
    
    
    return 0;
}