// Array reversal using pointers

#include <iostream>
using namespace std;

class PointerMath
{
public:
    void AddSubtract()
    {
        int arr[5] = {10, 20, 30, 40, 50};
        int *ptr = arr;

        cout << "Original pointer points to: " << *ptr << "\n";

        ptr += 3;
        cout << "After adding 3: " << *ptr << "\n";

        ptr -= 2; 
        cout << "After subtracting 2: " << *ptr << "\n";
    }
};

int main()
{
    PointerMath obj;
    obj.AddSubtract();
    return 0;
}

/*
OUTPUT
Reversed array: 5 4 3 2 1
*/