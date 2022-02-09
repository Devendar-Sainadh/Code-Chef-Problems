
#include <bits/stdc++.h>
using namespace std;
    
int main()
{
int T;
cin>>T;
while(T--){
    set<int> s1;
    set<int> s2;
    int n;
    cin>>n;
    int x[n];
    int y[n];
   
    for(int i=0;i<n;i++){
        cin>>x[i]>>y[i];
    }
    for(int i=0;i<n;i++){
        s1.insert(x[i]);
        s2.insert(y[i]);
    }
     int count1=s1.size();
    int count2=s2.size();
    
    cout<<count1+count2<<endl;
    
}
    return 0;
}
