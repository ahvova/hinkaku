#include <math.h>
#include <iostream>
#include <fstream>

using namespace std;

double step (double x1, double x2, double st) {
	if (x1==x2) {
		cerr<<"Interval of zero length\n";
		return -1;
	}
	if (st<=0) {
		cerr<<"Step must be postitive\n";
		return -2;
	}
	double begin,end;
	if (x1 > x2) {
		begin = x2;
		end = x1;
	}
	else {
		begin = x1;
		end = x2;
	}
	if (st > (end - begin)) {
		cerr<<"Too large step for this interval\n";
		return -3; 
	}
	if ((end - begin)/st != int ((end - begin)/st)) {
		cerr<<"Number of steps between points isn't int\n";
		return -4;
	}
	ofstream outfile("output.txt");
	while (begin < end) {
		outfile << begin*begin*begin*begin + atan(begin)<<'\n';
		begin += st;			
	}
	outfile.close();
	return 0;
}
