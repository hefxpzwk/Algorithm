#include <bits/stdc++.h>
#define A 97
using namespace std;

string check(int h,int w,int n) {
    string answer;
    
    if(n%h == 0) {
        answer = to_string(h);
    }
    else answer = to_string(n%h);
    if(n%h!=0){
        if(n/h+1 > 9) {
        answer+=to_string(n/h+1);
    }
    else {
        answer+="0" + to_string(n/h+1);
    }
    
    }
    else{
        if(n/h > 9) {
        answer+=to_string(n/h);
    }
    else {
        answer+="0" + to_string(n/h);
    }
    
    }
    
    return answer;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int t;
    cin>>t;
    for(int i=0;i<t;i++) {
        int h,w,n;
        cin>>h>>w>>n;
        cout<<check(h,w,n)<<"\n";
    }
   return 0;
}