// Display of string elements using pointers

#include <iostream>
using namespace std;

class PointerArray
{
public:
    void ReverseArray(int arr[], int n)
    {
        int *start = arr;
        int *end = arr + n - 1;
        while (start < end)
        {
            int temp = *start;
            *start = *end;
            *end = temp;
            start++;
            end--;
        }

        cout << "Reversed array: ";
        for (int i = 0; i < n; i++)
            cout << arr[i] << " ";
        cout << "\n";
    }
};

int main()
{
    PointerArray obj;
    int arr[5] = {1, 2, 3, 4, 5};
    obj.ReverseArray(arr, 5);
    return 0;
}

/*
OUTPUT
String elements using pointers: H e l l o
*/