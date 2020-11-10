#include <iostream>
#include <cmath>
using namespace std;
int S1(int b1, int q, int n)
{
    if (n == 1)
    {
        return b1;
    }

    else if (n > 0)
    {
        return q * S1(b1, q, n - 1);
    }
    else {
        cout << "Error";
        return 0;
    }
}

int main()
{
    int b1, q, n;
    cout << "b1: ";
    cin >> b1;
    cout << "\nq: ";
    cin >> q;
    cout << "\nn: ";
    cin >> n;

    int bn = S1(b1, q, n);

    cout << "\nbn: ";
    cout << bn;

    
    
}