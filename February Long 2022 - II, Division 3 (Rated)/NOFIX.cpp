#include <bits/stdc++.h>
using namespace std;
    
int main()
{
int T;
cin>>T;
while(T--){
    int n;
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++){
        int k;
        cin>>k;
        v.push_back(k);
    }
    
    int z=0;
    for(int i=0;i<n;i++){
        if(v[i]==i+1+z){
            z++;
        }
    }
    
    cout<<z<<endl;
}
    
    return 0;
}
