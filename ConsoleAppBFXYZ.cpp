#include <iostream>
#include <math.h>
using namespace std;

#define E 2.71828182845904523536
#define X 1.54
#define Y 3.26
#define Z 15 / X + pow(E,Y)
#define B (X + pow(Y,3)) / (X + pow(Z,2))
  
int main() {
	setlocale(LC_ALL, "rus");
	cout << "Вычислить b = f(x, y, z), где z = wf(x, y)" << endl;
	cout << "b = " << B << endl;
	return 0;
}