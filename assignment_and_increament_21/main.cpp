#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int age=21;

    switch(age){
    case 16:
        cout << "You can't drive now!" <<endl;
        break;
    case 18:
        cout <<"go buy some lotto tickers" <<endl;
        break;
    case 21:
        cout << "Buy me some beer" << endl;
        break;
    default:
        cout << "sorry you get nothing" << endl;
    }
}
