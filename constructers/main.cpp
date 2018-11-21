#include <iostream>

using namespace std;

class MaheshClass{
public:
    MaheshClass(string z){
        cout << "This prints out automatically" << endl;
        SetName(z);
    }
    void SetName(string x){
        name = x;
    }
    string getName(){
        return name;
    }
private:
    string name;
};

int main()
{
    MaheshClass bo("Lucky Mahesh");
    //bo.SetName("mahesh");
    cout << bo.getName() << endl;

    MaheshClass ko("Rocky");
    cout << ko.getName()<<endl;
    return 0;
}
