#include<iostream>
using namespace std;
// class animal{
//     public:
//     void sound(){
//         cout<<"animals make sounds.\n";
//     }
// };
// class dog:public animal{
//     public:
//     void bark(){
//     cout<<"dog barks.\n";
// }
// };
// int main(){
//     dog d;
//     d.sound();
//     d.bark();
//     return 0;
// }
// class person{
// public:
//     void display(){
//         cout<<"kirat is a person\n";
//     }
// };
// class student:public person{
//     public:
//     void show(){
//         cout<<"who contains 150 persons\n";
//     }
// };
// int main(){
//     student s;
//     s.display();
//     s.show();
//     return 0;
// }

// class a{
//     public:
//     void showa(){
//         cout<<"class a\n";
//     }
// };
// class b: public a{
//     public:
//     void showb(){
//         cout<<"class b\n";
//     }


// };
// class c: public b{
// public:
//     void showc(){
//         cout<<"class c\n";
//     }
// };
// int main(){
//     c obj;
//     obj.showa();
//     obj.showb();
//     obj.showc();
    
// }

// class a{
//     public:
//     void msga(){
//         cout<<"class a ";
//     }
// };
// class b{
//     public:
//     void msgb(){
//         cout<<"class b"<<endl;
//     }
// };
// class c: public a,public b{
//     public:
//     void msgc(){
//         cout<<"class c"<<endl;
//     }
// };
// int main(){
//     c s;
//     s.msga();
//     s.msgb();
    
//     s.msgc();

//     return 0;
// }

// class base{
//     public:
//     void show(){
//         cout<<"public inheritance";

//     }
// };
// class derived: public base{};
// int main(){
//     derived d;
//     d.show();
//     return 0;
// }

// class base{
//     public:
//     int n;
//     void printN(){
//         cout<<n<<endl;

//     }
// };
//     class derived:public base{
//         public:
//         void func(){
//             n=22;

//         };
//     };
//     int main(){
//         derived obj;
//         obj.func();
//         obj.printN();
//         return 0;


//     }

// class parent{
//     public:
//     int id_p;
//     parent(int x=22): id_p(x){}
//     void printID_P(){
//         cout<<"base ID: "<<id_p<<endl;
//     }
// };
// class child:public parent{
//     public:
//     int id_c;
//     child(int x=22): id_c(x){}
//     void printID_C(){
//         cout<<"child id: "<<id_c<<endl;

//     }
// };
// int main(){
//     child obj1;
//     obj1.id_p=7;
//     obj1.printID_P();
//     obj1.id_c=91;

//     obj1.printID_C();
// }

// class vehicle{
//     public:
//     vehicle(){
//         cout<<"this is a vehicle"<<endl;
//     }
// };
// class car:public vehicle{
//     public:
//     car(){
//         cout<<"this vehicle is car"<<endl;
//     }
// };
// int main(){
//     car obj;
    
// }

// class vehicle{
//     public:
//     vehicle(){
//     cout<<"this is a vehicle"<<endl;
//     }
// };
// class car{
//     public:
//     car(){
//         cout<<"this vehicle is a car"<<endl;
//     }
// };
// class carbrand:public vehicle, public car{
//     public:    
//     carbrand(){
//         cout<<"car brand is MAHINDRA"<<endl;
//     }
// };
// int main(){
//      carbrand Mahindra;
// }

// class friends{
//     public:
//     friends(){
//         cout<<"I have 6 friends and 6 bhabhis "<<endl;
//     }
// };
// class friendname: public friends{
//     public:
//     friendname(){
//         // string a,b,c,d,e,f;
//         // cin>>a>>b>>c>>d>>e>>f;
//         // cout<<"the friends name are: "<<a << " " <<b << " " <<c << " " <<d << " " <<e << " " <<f<<endl;
//         cout << "The Friend's <3 Bhabhi's Names Are: " << "\nHarsh <3 Hiya " << "Vansh <3 Zeeya " << "Itish <3 Komal " << "Kirat150 <3 Harekam " << "1balTmatar <3 kiran" << endl;
//     }
// };
// class list: public friendname{
//     public:
//     list(){
//     cout<<"these are my 12 friends"<<endl;
// }
// };
// int main(){
//     list obj;
//     return 0;
// }

// class vehicle{
//     public:
//     vehicle(){
//         cout<<"this is a vehicle"<<endl;
//     }
// };
// class bus:public vehicle{
//     public:
//     bus(){
//         cout<<"this vehicle is a bus"<<endl;
//     }
// };
// class car:public vehicle{
//     public:
//     car(){
//         cout<<"this vehicle is a car"<<endl;
//     }
// };
// int main(){
//     bus obj1;
//     car obj2;
//     return 0;
// }

// class vehicle{
//     public:
//     vehicle(){
//         cout<<"this is a vehicle"<<endl;
//     }
// };
// class fare{
//     public:
//     fare(){
//         cout<<"fare of vehicle"<<endl;
//     }
// };
// class car: public vehicle{
//     public:
//     car(){
//         cout<<"this vehicle is a car and has no fare"<<endl;
//     }
// };
// class bus: public vehicle ,public fare{
//     public:
//     bus(){
//         cout<<"the vehicle is a bus and the fare is 50Rs"<<endl;
//     }
//     ~bus(){
//         cout<<"this is constructor"<<endl;
//     }
// };
// int main(){
//     bus obj;
//     car obj1;
// }


