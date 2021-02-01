#include <iostream>

using namespace std;

int main ()
{
    string fi[11];
    fi[0] = "a";
    fi[1] = "b";
    for (int i = 2; i <= 11; i++)
    {
        fi[i] += fi[i-1] + fi[i-2];
    }
    
    for (int i = 0; i <= 11; i++)
        cout << fi[i] << ' ';
}