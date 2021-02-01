#include <cmath>
#include <iostream>

using namespace std;

int main ()
{
    int x, y, z;
    cin >> x >> y >> z;
    bool b = 0;
    if (x < y && y < z) b = 1;
    else if (x > y && y > z) b = 1;
    cout << b << endl;
}