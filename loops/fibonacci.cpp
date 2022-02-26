#include <iostream>
using namespace std;

int main()
{

    int a = 0;
    int b = 1;
    int n;
    cin >> n;
    for (int i = 2; i <= n; i++)
    {
        int temp = b;

        b = a + b;
        a = temp;
    }
    if (n == 1)
    {
        cout << a << endl;
    }
    else if (n == 2)
    {
        cout << b << endl;
    }
    else
    {
        cout << b << endl;
    }

    return 0;
}