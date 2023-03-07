#include <iostream>
using namespace std;
class A{
public:
    ~A(){
        cout<<"~A()"<<endl;
    }
};
class B{
    A a;
public:
    ~B(){
        cout<<"~B()"<<endl;
    }
};

class C: public B{
    B b;
    A a;
public:
    ~C(){
        cout<<"~C()"<<endl;
    }
};

int main (){
    A a;
    B b;
    C c;
    return 0;
}
