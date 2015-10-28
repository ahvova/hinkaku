#include <iostream>

using namespace std;

int fact (int n) {
	if (n <= 0) {
		cerr<<"Number should be positive\n";
		return -1;
	}
	double res=1;
	if (int (n/2) ==  (n+0.0)/2) {
		for (int i=2; i <= n;) {
			res *= i;
			i += 2;
		}	
	}
	else {
		for (int i=1; i <= n;) {
			res *= i;
			i += 2;
		}	
	}
	return res;
}
