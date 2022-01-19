#include <iostream>
using namespace std;
    
int main()
{
int T;
cin>>T;
while(T--){
    int A,B,C;
    cin>>A>>B>>C;
    if(A+B+C==101){
    if(A>50){
        cout<<"A"<<endl;
    }
    else if(B>50){
        cout<<"B"<<endl;
    }
    else if(C>50){
        cout<<"C"<<endl;
    }
    else{
        cout<<"NOTA"<<endl;
    }
    }
}
   
    return 0;
}
