#include <bits/stdc++.h>
using namespace std;
    
int main()
{
int T;
cin>>T;
while(T--){
    int a,b,c;
    cin>>a>>b>>c;
    int sum=0;
    if(a<=b && a<=c){
    sum=b+c;
    cout<<sum<<endl;
    }
    else if(b<=a && b<=c){
    sum=a+c;
    cout<<sum<<endl;
    }
    else{
        sum=a+b;
        cout<<sum<<endl;
    }
}
    
    return 0;
}
