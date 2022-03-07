#include <iostream>
using namespace std;

void max_min(int arr[], int n)
{
    // int maxi = INT_MIN;
    // int mini = INT_MAX;
    // or
    int maxi = arr[0];
    int mini = arr[0];
    for (int i = 0; i < n; i++)
    {

        maxi = max(maxi, arr[i]);
        // if (maxi < arr[i])
        // {
        //     maxi = arr[i];
        // }
    }
    cout << "Maximum number is: " << maxi << endl;

    for (int i = 0; i < n; i++)
    {
        mini = min(mini, arr[i]);
        // if (mini > arr[i])
        // {
        //     mini = arr[i];
        // }
    }
    cout << "Minimum number is: " << mini << endl;
}

int main()
{

    int size;
    cout << "Enter the size of array: " << endl;
    cin >> size;
    int arr[100];
    cout << "Enter the elements of array: " << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    max_min(arr, size);

    return 0;
}