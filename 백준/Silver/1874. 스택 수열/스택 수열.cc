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
        vec.push_back(a);
    }
    string answer;
    
    int a=1;
    for(int i=0;i<n;i++) {
        for(int j=a;j<=vec[i];j++){
            st.push(a++);
            answer.push_back('+');
        }
        
        if(st.top() == vec[i]) {
            answer.push_back('-');
            st.pop();
        }
        else {
            cout<<"NO";
            return 0;
        }
    }
    
    for(auto i : answer) {
        cout<<i<<"\n";
    }
    
    return 0;
}