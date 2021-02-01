#include "iostream"
#include "vector"

using namespace std;

int main ()
{
    const int NumArr = 5;
    const int MidNum = NumArr/2;
    vector <int> Arr;
    int num;
    for (int i = 0; i < NumArr; i++) {
        cin >> num;
        Arr.push_back(num);
    }

    sort(Arr.begin(), Arr.end());

    cout << Arr[MidNum] << endl;
}