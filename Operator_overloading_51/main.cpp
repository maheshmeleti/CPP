#include <iostream>
#include "Sally.h"
using namespace std;

int main()
{
    Sally a(34);
    Sally b(21);
    Sally c;

    c=a+b;
    cout << c.num << endl;

    Sally k(44);
    Sally d;
    d = k+c;
    cout << d.num << endl;
}
