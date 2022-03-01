#include <iostream>
using namespace std;

void swapAlternate(int arr[], int n)
{
    for (int i = 0; i < n; i += 2)
    {
        if (i + 1 < n)
        {
            swap(arr[i], arr[i + 1]);
            // int temp = arr[i];
            // arr[i] = arr[i + 1];
            // arr[i + 1] = temp;
        }
    }
}
void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
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
    swapAlternate(arr, size);
    printArray(arr, size);

    return 0;
}