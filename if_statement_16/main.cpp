#include <iostream>

using namespace std;

int main()
{
    int age;
    int ageTotal = 0;
    int numberOfPeopleEntered = 0;

    cout << "Enter first person age or -1 to quit "<<endl;
    cin >> age;
    while (age!=-1){
        ageTotal=age+ageTotal;
        numberOfPeopleEntered++;
        cout << "Enter first person age or -1 to quit "<<endl;
        cin >> age;
    }
    cout << "average age " << ageTotal/numberOfPeopleEntered << endl;

    return 0;
}
