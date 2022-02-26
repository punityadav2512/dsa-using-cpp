#include <iostream>
using namespace std;

// Largest of 3 numbers
int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    // Not Working

    if (a >= b && a >= c)
    {
        cout << a << endl;
    }
    else if (a >= b && a <= c)
    {
        cout << c << endl;
    }
    else
    {
        cout << b << endl;
    }

    // Working
    // int max = a;
    // if (b > max)
    // {
    //     max = b;
    // }
    // if (c > max)
    // {
    //     max = c;
    // }
    // cout << max << endl;

    // Working 2

    //     if (a >= b && a >= c)
    //     {
    //         cout << a << endl;
    //     }
    //     else if (c >= a && c >= b)
    //     {
    //         cout << c << endl;
    //     }
    //     else
    //     {
    //         cout << b << endl;
    //     }

    return 0;
}
