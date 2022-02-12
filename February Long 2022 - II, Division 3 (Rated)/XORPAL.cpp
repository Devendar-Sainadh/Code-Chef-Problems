

#include <bits/stdc++.h>
using namespace std;

int main()
{
 long long int t;
    cin>>t;
    while(t--){
      long long int n;
      cin>>n;
      string s;
      cin>>s;
      long long int a=0;
      long long int b=0;
      for(long long int i=0;i<n;i++){
        if(s[i]=='1'){
          a++;
        }
        else{
          b++;
        }
      }
      
      if((a==b)|| (a%2==0) || (b%2==0) || (n==1)){
        cout<<"YES"<<endl;
      }
      else{
        cout<<"NO"<<endl;
      }
    }
}
