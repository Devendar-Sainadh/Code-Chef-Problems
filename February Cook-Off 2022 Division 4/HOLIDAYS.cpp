#include <bits/stdc++.h>
using namespace std;
    
int main()
{
int T;
cin>>T;
while(T--){
    int n,w;
    cin>>n>>w;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int sum=0;
    int count=0;
    sort(arr, arr + n, greater<int>());
    for(int i=0;i<n;i++){
        sum+=arr[i];
        count++;
        if(sum>=w){
            break;
        }
    }
    
    cout<<n-count<<endl;
    
}
    
    return 0;
}
