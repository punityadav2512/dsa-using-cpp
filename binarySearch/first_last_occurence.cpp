#include <iostream>
using namespace std;

int firstOccurence(int arr[], int n, int key)
{
    int start = 0;
    int end = n - 1;
    int ans = -1;
    int mid = start + ((end - start) / 2);

    while (start <= end)
    {

        if (arr[mid] == key)
        {
            ans = mid;
            end = mid - 1;
        }
        if (key > arr[mid])
        {
            start = mid + 1;
        }

        if (key < arr[mid])
        {
            end = mid - 1;
        }

        mid = start + ((end - start) / 2);
    }
    return ans;
}

int lastOccurence(int arr[], int n, int key)
{
    int start = 0;
    int end = n - 1;
    int ans = -1;
    int mid = start + ((end - start) / 2);

    while (start <= end)
    {

        if (arr[mid] == key)
        {
            ans = mid;
            start = mid + 1;
        }
        if (key > arr[mid])
        {
            start = mid + 1;
        }

        if (key < arr[mid])
        {
            end = mid - 1;
        }

        mid = start + ((end - start) / 2);
    }
    return ans;
}

int main()
{
    int arr[5] = {0, 1, 1, 1, 2};
    int ans = firstOccurence(arr, 5, 1);
    int ans1 = lastOccurence(arr, 5, 1);
    int totalNoOfOccurence = ans1 - ans + 1;
    cout << "First occurence: " << ans << endl;
    cout << "Last occurence: " << ans1 << endl;
    cout << "Total No of occurence: " << totalNoOfOccurence << endl;

    return 0;
}