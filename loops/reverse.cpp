#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int ans = 0;

    while (n > 0)
    {
        int rem = n % 10;
        n = n / 10;
        ans = ans * 10 + rem;
    }

    cout << ans << endl;
    return 0;
}