#include<iostream>
using namespace std;

class Additional
{
    public:
    int c;
    void result(int a , int b)
    {
        c = a+b;
        cout << "The result :" << c << endl;
    }

};

int main()
{
   Additional obj;
   int p, q;
   cin>> p >> q ;
   obj.result(p, q); 
}