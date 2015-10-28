#include <math.h>
#include <iostream>

using namespace std;

double sumsin(double a=2.7, double b=3.1){
	if (a<=0 || b<=0) {
		cerr<<"Triangle side must be positive\n";
		return -1;		
	}
	return (a + b)/sqrt(a*a + b*b);
}
