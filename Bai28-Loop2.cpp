#include <iostream>

using namespace std;

int main () {
    cout << "12 midnight" << endl;
    string time = "am";
    for (int i = 1; i <= 12; i++) {
        if (i < 12) cout << i << time << endl;
        if (i == 11 && time == "pm") break;
        if (i == 12) {
            cout << i << " noon" << endl;
            i = 0;
            time = "pm";
        }
    }
    return 0;
}