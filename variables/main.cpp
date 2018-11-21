#include <iostream>

using namespace std;

void printSomething();
void printCrap(int x);
int addNumbers(int x,int y);

int main()
{
    /*int a;
    int b;
    int sum;

    cout << "Enter a number \n";
    cin >> a;

    cout << "Enter another number \n";
    cin >> b;

    sum = a+b;
    cout <<"sum of two numbers " << sum << endl;

    int x = (4+3)*7;
    cout << x << endl;

    // if
    if (5!=4){
        cout << "tucky";
    }*/
    printSomething();
    printCrap(5);
    cout << addNumbers(5,6) << endl;

    return 0;
}

void printSomething(){
    cout << "i am text on the screen" << endl;
}

void printCrap(int x){
    cout << "my fav number is " << x << endl;

}
int addNumbers(int x,int y){
    return x+y;
}





