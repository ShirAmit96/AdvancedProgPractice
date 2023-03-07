#include <iostream>
using namespace std;
class A{
public:
    void f(){
        cout<<"A::f()";
    }
    void f(int i){
        cout<<"A::f(int)";
    }
};
class B: public A{
public:
 using A::f;
    void f(int i){
        cout<<"B::f(int)";
    }
};

int main(){
    B b;
    b.f();// compiler error without "using"!
    b.f(1);
}
