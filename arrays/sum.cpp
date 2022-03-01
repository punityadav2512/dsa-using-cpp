#include <iostream>
using namespace std;

int sum(int arr[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    return sum;
}

int main()
{
    int size;
    cout << "Enter the size of array: ";
    cin >> size;
    int arr[100];
    cout << "Enter the elements of array: " << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    int ans = sum(arr, size);

    cout << "Sum of elements of array is: " << ans << endl;

    return 0;
}