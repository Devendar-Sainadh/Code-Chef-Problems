#include <bits/stdc++.h>
using namespace std;
    
int main()
{
int T;
cin>>T;
while(T--){
    int a,b;
    cin>>a>>b;
    int x=21-(a+b);
    
    if(x<=10){
        cout<<x<<endl;
    }
    else{
        cout<<-1<<endl;
    }
}
    
    return 0;
}
