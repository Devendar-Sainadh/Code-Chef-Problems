#include <bits/stdc++.h>
using namespace std;
    
int main()
{
int T;
cin>>T;
while(T--){
    int x;
    cin>>x;
    
    if(x<35){
        cout<<"Underload"<<endl;
    }
    else if(x>65)
    cout<<"Overload"<<endl;
    else{
        cout<<"Normal"<<endl;
    }
}
    
    return 0;
}
