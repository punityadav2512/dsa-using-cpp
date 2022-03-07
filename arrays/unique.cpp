#include <iostream>
using namespace std;

int unique(int arr[], int n)
{
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans = ans ^ arr[i];
    }
    return ans;
}

int main()
{
    int size;
    cout << "input the size of array: ";
    cin >> size;
    int arr[100];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    int ans = unique(arr, size);
    cout << ans << endl;

    return 0;
}