#include <iostream>

using namespace std;

int main ()
{
    int year;
    cin >> year;
    if (year % 4) cout << "false" << endl;
    else cout << "true" << endl;
}