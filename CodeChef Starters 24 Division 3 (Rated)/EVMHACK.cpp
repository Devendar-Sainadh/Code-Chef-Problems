#include <bits/stdc++.h>
using namespace std;
    
int main()
{
long int T;
cin>>T;
while(T--){
    int a,b,c,p,q,r;
    cin>>a>>b>>c>>p>>q>>r;
    float avg=(p+q+r)/2;

    
    if(a+b+c>avg){
        cout<<"YES"<<endl;
    }
    else if(p+b+c > avg){
        cout<<"YES"<<endl;
    }
    else if(a+q+c>avg){
         cout<<"YES"<<endl;
    }
    else if(a+b+r > avg){
        cout<<"YES"<<endl;
    }
   
    else{
        cout<<"NO"<<endl;
    }
   
    
}
    
    return 0;
}
