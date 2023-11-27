#include<iostream>
using namespace std;

class Addtion{

    public:

    int c;

    Addtion(int a, int b)
    {
        c = a+b;
        cout << "the result : "<< c ;
    }


};

int main() {
    int x, y;
    cin >> x >> y;

    Addtion ob(x, y);

    return 0;
}