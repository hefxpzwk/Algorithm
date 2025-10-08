#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int a,b,c;
    cin >>a >>b>>c;
    string abc = to_string(a*b*c);
    
    int arr[10]={0,};
    for(int i=0;i<abc.size();i++) {
        arr[abc[i]-'0']++;   
    }
    
    for(int i=0;i<10;i++) {
        cout<<arr[i]<<"\n";
    }
    
    return 0;
}