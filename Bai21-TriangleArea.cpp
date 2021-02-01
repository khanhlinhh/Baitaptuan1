#include <iostream>
#include <cmath>

using namespace std;

int main ()
{
    double a, b, c;
    cin >> a >> b >> c;
    double s;
    s = (a+b+c)/2;
    double area;
    area = sqrt(s*(s-a)*(s-b)*(s-c));
    cout << area << endl;
}