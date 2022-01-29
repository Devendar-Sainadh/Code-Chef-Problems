#include <bits/stdc++.h>
using namespace std;
    
int main()
{
int T;
cin>>T;
while(T--){
    int n,x,y;
    cin>>n>>x>>y;
    int a[n];
    int b[n];
    vector<int> c;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int j=0;j<n;j++){
        cin>>b[j];
    }
    for(int i=0;i<n;i++){
        if(a[i]+x==b[i]){
            c.push_back(a[i]+x);
        }
        else{
          c.push_back(a[i]+y)
          ;
        }
    }
    int count=0;
    for(int i=0;i<n;i++){
        if(c[i]!=b[i]){
            cout<<"NO"<<endl;
            break;
        }
        else{
            count++;
        }
    }
    if(count==n){
        cout<<"YES"<<endl;
    }
    
}
    
    return 0;
}
