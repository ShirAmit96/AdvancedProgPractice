# include <iostream>
using namespace std;

// two classes that inherits the same class:

//class A {  public: virtual void f() {
//    cout<<"A::f()"<<endl;
//}
//};
//class B:public A
//{
//public:
//    void g(){
//        cout<<"B::g()"<<endl;
//    }
//
//    using B:: void f(){
//        cout<<"B::f()"<<endl;
//    }
//};
//class C:public A
//{
//public:
//    void h(){
//        cout<<"C::h()"<<endl;
//    }
//};
//
//
//int main()
//{
//    A* a= new B();
//    a->f();
//  //  c->f();
////    c.f();
////    c.g();
////    c.h();
////    A* pA=&c;
////    B* pB=&c;
////    pB->h();
////    pA->f();
////    pB->g();
//
//}

// one class that inherits two classes:
class Father{
public:
    void hug(int i){
        cout<<"father hugs"<<endl;
    }
};
class Mother{
public:
    void hug(int i, int j){
        cout<<"mother hugs"<<endl;
    }
};
class Son: public Father, public Mother{

};

int main(){
    Son joe;
    joe.hug(5, 7);//compilation error
    joe.Mother::hug(5, 7);// prevents compilation error
}
