#include <iostream>
#include <math.h>

using namespace std;

int main() {
    double a = 16.74;
    double r3 = a * sqrt(3)/3;
    double r5 = a * sqrt((1/2)+(sqrt(5)/10));
    double r8 = a * sqrt(1 + (sqrt(2)/2));
    double r10 = (a/2) * (1 + sqrt(5));

    cout << r3 << endl;
    cout << r5 << endl;
    cout << r8 << endl;
    cout << r10 << endl;

}