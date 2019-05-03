#include <iostream>

using namespace std;

template <class T>
class Mahesh{
    T first, second;
    public:
        Mahesh(T a,T b){
            first=a;
            second=b;
        }
        T bigger();
};

template <class T>
T Mahesh<T>::bigger(){
    return (first>second?first:second);
}

int main() {
    Mahesh <double> mo(69,105);
    cout << mo.bigger();
}
