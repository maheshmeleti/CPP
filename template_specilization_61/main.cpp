#include <iostream>

using namespace std;

template <class T>
class Spunky{
public:
   Spunky(T x){
        cout << x << "is not a character!" << endl;
   }
};

template<>
class Spunky<char>{
public:
    Spunky(char x){
        cout << x << " is indeed a character" << endl;
    }
};

int main()
{
    try{

        int num1;
        cout << "Enter first number: "<<endl;
        cin >> num1;

        int num2;
        cout << "Enter second number: "<<endl;
        cin >> num2;

        if(num2 == 0){
            throw 0;
        }
        cout << num1/num2 << endl;

    }catch(...){
        cout << "you cant divide by 0" << endl;
    }
}
