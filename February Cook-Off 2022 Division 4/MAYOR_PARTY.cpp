#include <bits/stdc++.h>
using namespace std;
    
int main()
{
int T;
cin>>T;
while(T--){
    int a,b,c,d;
    cin>>a>>b>>c;
    d=a+c;
    
    cout<<max(d,b)<<endl;
}
    
    return 0;
}
