#include <iostream>
using namespace std;

// Working

// bool isPrime(int n)
// {
//     if (n <= 1)
//     {
//         cout << "Is not a prime number" << endl;
//         return false;
//     }
//     int i;
//     for (i = 2; i * i <= n; i++)
//     {
//         if (n % i == 0)
//         {
//             cout << "Is not a prime number" << endl;
//             return false;
//         }
//     }
//     if (i * i > n)
//     {
//         cout << "Is a prime number " << endl;
//         return true;
//     }

//     return false;
// }

void isPrime(int n)
{
    if (n <= 1)
    {
        cout << "Is not a prime number" << endl;
        return;
    }
    int i;
    for (i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            cout << "Is not a prime number" << endl;
            return;
        }
    }

    cout << "Is a Prime number " << endl;
}

int main()
{
    int n;
    cin >> n;

    isPrime(n);

    return 0;
}