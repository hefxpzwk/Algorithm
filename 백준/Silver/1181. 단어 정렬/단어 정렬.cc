#include <bits/stdc++.h>
using namespace std;

class Cmp {
public:
    bool operator()(const string &a, const string &b) const {
        if(a.size()==b.size()) {
            return a<b;
        }
        return a.size()<b.size();
    }

};
bool cmp(const string &a, const string &b) {
    if(a.size()==b.size()) {
        return a<b;
    }
    return a.size()<b.size();
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int n;
    cin>>n;
    
    set<string ,Cmp> s;
    for(int i=0;i<n;i++) {
        string a;
        cin>>a;
        s.insert(a);
    }
    
    for(auto i : s) {
        cout << i <<"\n";
    }
    
    return 0;
}