#include <bits/stdc++.h>
using namespace std;
    
int main()
{
int T;
cin>>T;
while(T--){
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    int x,y;
    if(a>c)
    x=a-c;
    else
    x=c-a;
    
    if(b>d)
    y=b-d;
    else
    y=d-b;
    
    cout<<max(x,y)<<endl;
}
    
    return 0;
}
