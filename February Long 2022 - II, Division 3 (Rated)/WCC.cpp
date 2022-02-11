#include <bits/stdc++.h>
using namespace std;
    
int main()
{
int T;
cin>>T;
while(T--){
    int x;
    cin>>x;
    string s;
    cin>>s;
    int c=0;
    int n=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='C'){
            c+=2;
        }
        else if(s[i]=='N'){
            n+=2;
        }
        else if(s[i]=='D'){
            c+=1;
            n+=1;
        }
    }
    
    if(c>n){
        cout<<60*x<<endl;
    }
    else if(c<n){
        cout<<40*x<<endl;
    }
    else{
        cout<<55*x<<endl;
    }
}
    
    return 0;
}
