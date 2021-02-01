#include "iostream"
#include "cmath"

using namespace std;

int main ()
{
    int d, m, y;
    cin >> d >> m >> y;
    if (m < 3) {
        m = m + 12;
        y = y - 1;
    }

    int n;
    n = (d + 2*m + (3*(m + 1))/5 + y + (y/4)) % 7;
    switch (n) {
        case 0:
            cout << "Sunday" << endl;
            break;

        case 1:
            cout << "Monday" << endl;
            break;
        
        case 2:
            cout << "Tuesday" << endl;
            break;

        case 3:
            cout << "Wednesday" << endl;
            break;

        case 4:
            cout << "Thursday" << endl;
            break;

        case 5:
            cout << "Friday" << endl;
            break;
        
        case 6:
            cout << "Saturday" << endl;
            break;

        case 7:
            cout << "Sunday" << endl;
            break;
    }
}
