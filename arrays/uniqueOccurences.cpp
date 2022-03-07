#include <iostream>
using namespace std;

bool uniqueOccurrences(int arr[], int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
            }
        }
        int ans = ans + count;
        count = 0;
    }
    return false;
}

int main()
{
    int arr[6] = {1, 2, 2, 1, 1, 3};
    uniqueOccurrences(arr, 6);

    return 0;
}