/* ************* QUESTION************
A disease is spreading through ChefLand!

The disease spreads as follows:

At the end of day 0, a single person is infected with the disease.
During the next 10 days, the number of infected people doubles each day, until the disease has spread to all people in ChefLand.
From day 11 onwards, the number of infected people triples each day, until the disease has spread to all people in ChefLand.
You are given the population of ChefLand N and a day D. How many people in ChefLand are infected at the end of day D?
*/


#include <bits/stdc++.h>
using namespace std;

int main()
{
  int T;
  cin>>T;
  while(T--){
     long int N,D,ans;
     cin>>N>>D;
     long int aff=1;
     
     if(D<11){
         aff=pow(2,D);
         ans=aff;
     }
     else{
          ans=1024;
     for(int i=0;i<D-10;i++){
      ans=3*ans;
      if(ans>N){
      break;
      }
    }
    
     
  }
    if(N>ans){
    cout<<ans<<endl;
    }
    else{
      cout<<N<<endl;
    }
    }
  
  return 0;
}

