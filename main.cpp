#include <iostream>
using namespace std;

void convert(int n);

int main()
{

    convert(1);
    cout << endl;

    convert(8);
    cout << endl;

    convert(29);
    cout << endl;

    convert(43);
    cout << endl;

    return 0;
}

void convert(int n)
{
    if (n == 1)
    {
        cout << 1;
    }
    else
    {
        convert (n/2);
        cout << n % 2;
    }
}