#include <iostream>
using namespace std;
int main ()
{
    int a=9;
    int b=0;
    try {
        if(b<=0)
        {
            throw b;
        }
     cout<<a/b<<endl;   
    }
    catch (int n){
        cout<<"ERROR:Division by zero is not allowed"<<endl;
        cout<<"ERROR CODE: "<<n<<endl;
    }
    cout<<"Finished"<<endl;
    
}