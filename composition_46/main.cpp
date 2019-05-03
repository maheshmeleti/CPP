#include <iostream>
#include "Birthday.h"
#include "People.h"
using namespace std;


int main()
{
    Birthday birthObj(8,31,1998);
    People Mahesh("Mahesh the king",birthObj);
    Mahesh.printInfo();
}
