#include <bits/stdc++.h>
using namespace std;



int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int n;
    cin>>n;
    
    vector<int> vec;
    vec.push_back(0); //0
    vec.push_back(0); //1
    vec.push_back(1); //2
    vec.push_back(1); //3
    
    int answer = 0;
    
    for(int i=4;i<=n;i++) {
        if(i%3==0) {
            if(i%2==0) {
                vec.push_back(min(vec[i/3],min(vec[i/2],vec[i-1]))+1);
            }
            else 
                vec.push_back(min(vec[i/3],vec[i-1])+1);
            //cout<<"\n\nasdfasdf     "<<i<<"     asdfasdf\n\n";
        }
        else if(i%2==0) {
            vec.push_back(min(vec[i/2],vec[i-1])+1);
            //cout<<"\n\n12341234     "<<i<<"     12341234\n\n";
        }
        else {
            vec.push_back(vec[i-1]+1);
           // cout<<"\n\n.,.,.,.,     "<<i<<"     .,.,.,.,\n\n";
        }
        //cout<<"    "<<vec[i]<<"    \n\n";
    }
    
    cout<<vec[n];
    
    
    
    
    return 0;
}
/*
1  0(0)

2  1(2,3)

3  1(1)

4  2(22,31,23)

5  3(3{4})

6  2(2{3})
*/