#include<iostream>
using namespace std;
class demo{
    static int count;
    public:
    demo(){
        count++;
    }
    void show(){
        cout<<"count: "<<count<<endl;
    };

    };
    int demo::count=0;
    int main(){
        demo a;
        demo b;
        demo c;
        c.show();
        return 0;

    }
