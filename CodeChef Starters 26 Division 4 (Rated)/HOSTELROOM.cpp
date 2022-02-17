
#include <bits/stdc++.h>
using namespace std;
    
int main()
{
int T;
cin>>T;
while(T--){
    int n,x;
    cin>>n>>x;
    int arr[n];
    
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
 int p=x;
int sum=x;

    for(int i=0;i<n;i++){
        sum+=arr[i];
        p=max(p,sum) ;
}
    cout<<p<<endl;
}
    
    return 0;
}
