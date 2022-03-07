#include <iostream>
using namespace std;

void binarySearch(int arr[], int n, int key)
{
    int s = 0;
    int e = n - 1;
    int mid = s + ((e - s) / 2);

    while (s <= e)
    {
        if (arr[mid] == key)
        {
            cout << mid << endl;
            return;
        }
        if (arr[mid] > key)
        {
            e = mid - 1;
            mid = s + ((e - s) / 2);
        }
        if (arr[mid] < key)
        {
            s = mid + 1;
            mid = s + ((e - s) / 2);
        }
    }
    cout << "key not found" << endl;
    return;
}

int main()
{

    int arr[100];
    int size;
    cout << "Enter the size: ";
    cin >> size;

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    int key;
    cout << "Enter key to search: ";
    cin >> key;

    binarySearch(arr, size, key);
    return 0;
}