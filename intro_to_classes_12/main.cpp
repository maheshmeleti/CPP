#include <iostream>
#include <string>

using namespace std;

class MaheshClass{
public:
    MaheshClass(string z){
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
    MaheshClass M("mahesh_meleti_i0");
    cout << M.getName() <<endl;

    MaheshClass K("matter that matters");
    cout << K.getName()<<endl;
    return 0;
}
