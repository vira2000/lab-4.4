#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
	int x, y;
	double xp, xk, dx, R;
	cout << "xp = "; cin >> xp;
	cout << "xk = "; cin >> xk;
	cout << "dx = "; cin >> dx;
	cout << "R = "; cin >> R;

	cout << fixed;
	cout << " tabulatsia       funktsiyi" << endl;
	cout << "---------------------------" << endl;
	cout << "|" << setw(5) << "x" << " |"
		<< setw(7) << "y" << " |" << endl;
	cout << "---------------------------" << endl;
	x = xp;
	while (x <= xk)
	{
		if (x <= -1 - R)
			y = -x - 1 - R;
		else
			if (-1 - R < x && x <= -1)
				y = sqrt(R * R - pow(-x + 1 - R, 2));
			else
				if (-1 < x && x <= 1)
					y = R;
				else
					if (1 < x && x <= 2)
						y = -x + 1 - R * x + 2 * R;
					else
						y = -1;

		cout << "|" << setw(7) << setprecision(2) << x
			<< " |" << setw(7) << setprecision(3) << y
			<< " |" << endl;
		x += dx;
	}
	cout << "---------------------------" << endl;
	return 0;
}
