#include <bits/stdc++.h>

using namespace std;

string check(string s) {
    string answer;
    
    stack<char> st;
    for(int i=0;i<s.size();i++) {
        if(s[i]=='(') st.push('(');
        else {
            if(st.empty()) return "NO";
            st.pop();
        }
    }
    if(st.empty()) return "YES";
    else return "NO";
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int n;
    cin>>n;
    
    for(int i=0;i<n;i++) {
        string str;
        cin>>str;
        cout<<check(str)<<"\n";
    }
    
    return 0;
}