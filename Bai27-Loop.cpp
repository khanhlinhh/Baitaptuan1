#include <iostream>

using namespace std;

int main () {
    int n;
    while (n) {
    cin >> n;
    if (n == -1) break;
    bool check = 0;
    if (n >= 0 and n % 5 == 0) check = 1;
    double result = check ? n/5 : -1;
    cout << result << endl;
    }
}