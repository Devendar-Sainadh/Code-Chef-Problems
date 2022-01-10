/* ***************** QUESTION***************
Kepler’s Law states that the planets move around the sun in elliptical orbits with the sun at one focus. Kepler's 3rd law is The Law of Periods, according to which:

The square of the time period of the planet is directly proportional to the cube of the semimajor axis of its orbit.
You are given the Time periods (T1,T2) and Semimajor Axes (R1,R2) of two planets orbiting the same star.

Please determine if the Law of Periods is satisfied or not, i.e, if the constant of proportionality of both planets is the same.

Print "Yes" (without quotes) if the law is satisfied, else print "No".
*/

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	int t1,t2,r1,r2;
	cin>>t;
	while(t--){
	cin>>t1>>t2>>r1>>r2;
	if(double(t1*t1)/double(r1*r1*r1)==double(t2*t2)/double(r2*r2*r2)){
	    cout<<"Yes"<<endl;
	}
	else{
	    cout<<"No"<<endl;
	}
	}
	
	return 0;
}

