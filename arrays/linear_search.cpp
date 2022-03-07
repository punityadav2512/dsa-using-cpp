#include <iostream>
using namespace std;

// Linear Search
int linearSearch(int arr[], int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (key == arr[i])
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int key;
    cin >> key;
    int arr[5] = {2, 3, 4, -2, 5};
    int ans = linearSearch(arr, 5, key);
    cout << "key is at index: " << ans << endl;

    return 0;
}