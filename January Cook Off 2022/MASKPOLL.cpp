#include <iostream>
using namespace std;
    
int main()
{
int T;
cin>>T;
while(T--){
    int N,A;
    cin>>N>>A;
    int B=N-A;
    if(A<B){
        cout<<A<<endl;
    }
    else{
        cout<<B<<endl;
    }
}
    
    return 0;
}
