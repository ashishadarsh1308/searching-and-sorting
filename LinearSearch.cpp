#include <iostream>
using namespace std;

int SearchArr(int num, int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == num)
            return i;
    }
    return -1;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int size = sizeof(arr) / sizeof(arr[0]);
    int num = 5;
    int result = SearchArr(num, arr, size);
    if (result == -1)
        cout << "Element not found";
    else
        cout << "Element found at index: " << result;
    return 0;
}