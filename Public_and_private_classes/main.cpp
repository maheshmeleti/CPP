#include <iostream>
#include <string>

using namespace std;

class MaheshClass{
    public:
        void setName(string x){
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
    MaheshClass bo;
    bo.setName("MaheshMeleti");
    cout << bo.getName() << endl;
    return 0;
}
