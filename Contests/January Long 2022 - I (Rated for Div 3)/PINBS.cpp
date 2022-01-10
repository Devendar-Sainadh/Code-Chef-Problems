/*  ****************** QUESTION**************
You are given a binary string S of length N. Your task is to check if there exists a substring of S which is the binary representation of a prime number.

Formally, check if there exist integers L and R such that 1≤L≤R≤N, and the substring SLSL+1SL+2…SR, when treated as a binary integer, is prime.

Print "Yes" if such a substring exists, and "No" if it doesn't.
*/

#include <iostream>
#include<string>
using namespace std;

int main() {
int T;
cin>>T;

    

while(T--){
    string str;
   string sol="No";
   cin>>str;
 
  if(str.length()==1){
       cout<<"No"<<endl;
  }
  else{
for(int i=0;i<str.length()-1;i++){
   
   if(str[i]=='1' && str[i+1]=='1'){
      sol="Yes";
       break;
   }
   else if(str[i]=='1' && str[i+1]=='0'){
      sol="Yes";
        break;
        }
   }
   
   cout<<sol<<endl;}
       
 
}


return 0;
}
