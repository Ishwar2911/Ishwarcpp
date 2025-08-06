#include<iostream>
using namespace std;
// class demo{
//     static int count;
//     public:
//     demo(){
//         count++;
//     }
//     void show(){
//         cout<<"count: "<<count<<endl;
//     };

//     };
//     int demo::count=0;
//     int main(){
//         demo a;
//         demo b;
//         demo c;
//         c.show();
//         return 0;

//     }

// void create(){
//     static int x=0;
//     x++;
//     cout<<"x: "<<x<<endl;

// };
// int main(){
//     create();
//     create();
//     return 0;
// }


class A{
    public:
    void show(){
        cout<<"A";
    }
};
class B{
    public:
    void show(){
        cout<<"B";
    }
};
class C:public A,public B{};
int main(){
    C obj;
    obj.B::show();
    return 0;
}



// class Demo{
//     static int count;
// public:
//     Demo(){
//         count++;
//     }

//     void show(){
//         cout << "Count: " << count << endl;
//     }
// };

// int Demo::count = 0;

// int main(){
//     Demo a;
//     Demo b;
//     Demo c;

//     a.show();

// }

// class demo{
//     int a;
//     public:
//     demo(int x): a(x){}
//     void show()const{
//         cout<<"value: "<<a<<endl;
//     }    
// };
// int main(){
//     demo a(10);
//     a.show();
//     return 0;
// }

// class demo{
//     int a=10;
//     friend void show(demo);
// };
// void show(demo d){
//     cout<<"value:" <<d.a<<endl;
// };
// int main(){
//     demo d;
//     show(d);
// }


// class B;
// class A{
//     int x=5;
//     friend class B;
// };
// class B{
//     public:
//     void display(A a){
//         cout<<"value: "<<a.x<<endl;

//     };
// };
// int main(){
//     A a;
//     B b;
//     b.display(a);
//     return 0;
// }