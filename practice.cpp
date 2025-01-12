#include <iostream>
using namespace std;\

class company
{
    public:virtual void eminfo() final
    {
        cout << "1 lakh log \n" ;
    } 
};

class branch:public company
{
    public:void eminfo()
    {
        cout << "100 log \n";
    }
};


int main()
{
    branch obj;
    obj.eninfo();
}