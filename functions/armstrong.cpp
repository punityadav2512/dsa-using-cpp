#include <iostream>
using namespace std;

bool isArmstrong(int n)
{
    int value = n;
    int ans = 0;
    while (n > 0)
    {
        int rem = n % 10;
        n = n / 10;
        ans += (rem * rem * rem);
    }
    if (value == ans)
    {
        // cout << "Is an Armstrong number" << endl;
        // return true;
        cout << ans << endl;
        return true;
    }

    // cout << "Is not an Armstrong number" << endl;
    return false;
}

int main()
{
    int n;
    // cin >> n;
    // isArmstrong(n);
    for (int i = 1; i < 1000; i++)
    {
        isArmstrong(i);
    }
    return 0;
}