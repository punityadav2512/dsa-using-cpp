#include <iostream>
using namespace std;

// Reverse an array

// Other approaches

void reverse2(int arr[], int n)
{
    int start = 0;
    int end = n - 1;

    while (start < end)
    {
        swap(arr[start], arr[end]);
        // int temp = arr[start];
        // arr[start] = arr[end];
        // arr[end] = temp;

        start++;
        end--;
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// For only printing reverse
// void reverse(int arr[], int n)
// {

//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[n - i - 1] << " ";
//     }
//     cout << endl;
// }

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
    // reverse(arr, size);
    reverse2(arr, size);

    return 0;
}