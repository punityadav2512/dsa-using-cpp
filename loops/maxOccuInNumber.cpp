#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    cout << "Enter which number you want to find that it occured how many times - ";
    int a;
    cin >> a;

    int count = 0;

    while (n > 0)
    {
        int b = n % 10;
        if (b == a)
        {
            count++;
        }
        n = n / 10;
    }

    cout << count << endl;

    return 0;
}