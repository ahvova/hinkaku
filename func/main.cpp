#include <iostream>

using namespace std;

double sumsin (double a=1, double b=7);
int fact (int);
double step (double, double, double);

int main() {
	/*cout << "Testing sumsin\n";
	cout << "Input a and b\n";
	double a, b;
	cin >>a>>b;
	cout << "Sum of sin = "<< sumsin(a,b)<<'\n';
	cout << "Testing step\n";
	cout << "Input a, b, step\n";
	double st;
	cin >>a>>b>>st;
	step(a,b,st);*/
	cout << sumsin()<<'\n';
	cout << "Testing fact\n";
	cout << "Input n\n";
	int n;
	cin >>n;
	cout << "Double factorial of n = "<< fact (n)<<'\n';
	return 0;
}

