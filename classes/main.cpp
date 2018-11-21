#include <iostream>
#include <string>

using namespace std;

class MaheshClass{
    public:
        void coolSaying(){
            cout << "Ice cream" << endl;
        }
};
class MeletiClass{
    public:
        string name;
};

int main()
{
    MeletiClass bo;
    bo.name = "Mahesh Meleti";
    cout << bo.name;
    MaheshClass MaheshObject;
    MaheshObject.coolSaying();
    return 0;
}
