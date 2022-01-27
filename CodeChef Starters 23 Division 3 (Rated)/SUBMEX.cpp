#include <bits/stdc++.h>
using namespace std;
    
int main()
{
int T;
cin>>T;
while(T--){
    long int n,k,x;
    cin>>n>>k>>x;
    int arr[n];
    if(x>k){
        cout<<-1<<endl;
        continue;
    }
    for (int i = 0; i < n; i++)
    {

        arr[i]=i%x;
    }
 
    
    for (int i = 0; i < n; i++)
    {

        cout<<arr[i]<<" ";
        
    }
    cout<<endl;
}
    

    
    return 0;
}
