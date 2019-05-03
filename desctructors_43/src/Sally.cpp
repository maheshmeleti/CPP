#include <iostream>
#include "Sally.h"
using namespace std;

Sally::Sally(int a, int b)
: regVar(a), constVar(b)
{

}

void Sally::print(){
    cout << "Regular var is: " << regVar << "const Variable is: "<< constVar << endl;
}
