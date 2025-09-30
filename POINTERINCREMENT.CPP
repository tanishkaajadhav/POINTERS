// Increment of pointers for various data types

#include <iostream>
using namespace std;

class PointerIncrement
{
public:
    void IncrementDemo()
    {
        int i = 10;
        char c = 'A';
        double d = 3.14;

        int *iptr = &i;
        char *cptr = &c;
        double *dptr = &d;

        cout << "Original addresses:\n";
        cout << "int: " << iptr << ", char: " << (void*)cptr << ", double: " << dptr << "\n";

        iptr++;
        cptr++;
        dptr++;

        cout << "After incrementing pointers:\n";
        cout << "int: " << iptr << ", char: " << (void*)cptr << ", double: " << dptr << "\n";
    }
};

int main()
{
    PointerIncrement obj;
    obj.IncrementDemo();
    return 0;
}

/*
OUPUT
Original addresses:
int: 0x7ffee2b1a4bc, char: 0x7ffee2b1a4bb, double: 0x7ffee2b1a4b0
After incrementing pointers:
int: 0x7ffee2b1a4c0, char: 0x7ffee2b1a4bc, double: 0x7ffee2b1a4b8
*/