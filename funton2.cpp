#include<iostream>
using namespace std;

class Additional{
    public:
    int z;
    void result(int x,int y)
    {
        z = x+y;
        cout << "The Result is : " << z << endl;
    }


};

int main(){
    Additional obj;
    Additional obj1;
    int a,b;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    obj.result(a,b);
    obj1.result(a,b);
}