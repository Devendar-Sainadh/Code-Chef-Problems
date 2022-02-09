#include <bits/stdc++.h>
using namespace std;
    
int main()
{
long long int T;
cin>>T;
while(T--){
    int n,x;
    cin>>n>>x;
    if(x<=n){
        cout<<x<<endl;
    }
    else if(x>n){
        cout<<((x-n)-1)<<endl;
    }
}
    
    return 0;
}
