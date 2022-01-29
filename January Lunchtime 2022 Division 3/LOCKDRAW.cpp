#include <bits/stdc++.h>
using namespace std;
    
int main()
{
int T;
cin>>T;
while(T--){
    int x,y,z;
    cin>>x>>y>>z;
    if(x+y==z || y+z==x || x+z==y){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}
    
    return 0;
}
