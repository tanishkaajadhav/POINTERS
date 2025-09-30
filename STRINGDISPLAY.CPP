// Addition and subtraction using pointers

#include <iostream>
using namespace std;

class PointerString
{
public:
    void DisplayString(char *str)
    {
        while (*str != '\0')
        {
            cout << *str << " ";
            str++;
        }
        cout << "\n";
    }
};

int main()
{
    PointerString obj;
    char str[] = "Hello";
    cout << "String elements using pointers: ";
    obj.DisplayString(str);
    return 0;
}

/*
OUTPUT
Original pointer points to: 10
After adding 3: 40
After subtracting 2: 20
*/