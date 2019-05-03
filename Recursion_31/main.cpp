#include <iostream>
#include "sally.h"
using namespace std;


int main()
{
   sally sallyObject;
   sally *sallyPointer = &sallyObject;

   sallyObject.printCrap();
   sallyPointer->printCrap();

}


