#include <iostream>
using namespace std;

int BinnarySearch(int a, int arr[], int size)
{
    int low = 0;
    int high = size - 1;

    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] == a)
            return mid;
        else if (arr[mid] > a)
            high = mid - 1;
        else
            low = mid + 1;
    }
    return -1;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int size = sizeof(arr) / sizeof(arr[0]);
    int a = 8;
    int result = BinnarySearch(a, arr, size);
    if (result == -1)
        cout << "Element not found";
    else
        cout << "Element found at index: " << result;
    return 0;
}