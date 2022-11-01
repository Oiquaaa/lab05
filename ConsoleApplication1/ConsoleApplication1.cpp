#include <iostream>
#include <cmath>
using namespace std;
double g(const double a, const double b); // прототип
int main()
{
	double s, g, t;
	cout << "s = "; cin >> s;
	cout << "g = "; cin >> g;
	cout << "t = "; cin >> t;
	double c = g * (1, s) + pow(1 + g * (t, 1), 2) / pow(1 + g * (s + t, 1), 3);
	cout << "c = " << c << endl;
	return 0;
}
double g(const double a, const double b) // визначення
{
	return (a * a) + (a * b) + (b * b);
}