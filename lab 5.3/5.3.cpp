#include <iostream>
#include <cmath>
using namespace std;
double f(const double x);
int main()
{
	double y = yp;
	while (y <= yk)
	{
		z = f(1 + y * y) + f(f(1) + f(y) * f(y)) * f(f(1) + f(y) * f(y));
		cout << y << " " << z << endl;
		y += dy;
	}
	return 0;
}
	{
		double S = 0;
		int i = 0;
		double a = 1;
		S = a;
		do
		{
			a *= R;
			S += a;
		} while (i < 6);
		return S;
	}
}