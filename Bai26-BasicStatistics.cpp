#include <iostream>
#include <vector>

using namespace std;

int main () {
    double num;
    cin >> num;
    vector <double> Arr;
    int x;

    for (int i = 0; i < num; i++) {
        cin >> x;
        Arr.push_back(x);
    }

    double ave = 0;
    for (int i = 0; i < num; i++) {
        ave += Arr[i];
    }

    ave /= num;
    sort (Arr.begin(), Arr.end());
    cout << "Mean: " << ave << endl
         << "Max: " << Arr[num-1] << endl
         << "Min: " << Arr[0] << endl;
    return 0;
}