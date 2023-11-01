#include <iostream>
using namespace std;

// main function
int main()
{
    // variables
    int last, mid, first, a;
    // using for-loop
    for (int i = 99; i <= 999; i++)
    {
        a = i;
        last = a % 10;
        a = a / 10;
        mid = a % 10;
        a = a / 10;
        first = a % 10;
        if (((last * last * last) + (mid * mid * mid) + (first * first * first)) == i)
        {
            cout << "The armstrong number between 99-999 is:" << i << endl;
        }
    }

    return 0;
}
