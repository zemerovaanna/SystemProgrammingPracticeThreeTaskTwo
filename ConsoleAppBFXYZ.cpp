#include <iostream>
#include <math.h>
using namespace std;

#define y 3.26
#define x 1.54
#define e 2.71828182845904523536
#define z 15 / (x + pow(e, y))
#define b ((x + pow(y, 3)) / (x + pow(z, 3)))

int main()
{
    setlocale(LC_ALL, "ru");
    cout << "Задание 2: Вычислить b, при b = f(x, y, z), где z = wf(x, y) при постоянных значениях x и y." << endl;
    cout << "b = " << b << endl;
    return 0;
}
