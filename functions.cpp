//Call by value
// #include<iostream>
// using namespace std;
// void modify(int a){
//     a+=50;
// };
// int main(){
//     int a=5;
//     modify(a);
//     cout<<a<<endl;

// }

//call by reference
// void modify(int &a){
//     a+=50;
// };
// int main(){
//     int a=5;
//     modify(a);
//     cout<<a<<endl;
//     return 0;
// }

//call by pointer
// void modify(int *a){
//     *a+=50;
// };
// int main(){
//     int a=5;
//     modify(&a);
//     cout<<a<<endl;
//     return 0;
// }

//return by reference
// #include <iostream>
// using namespace std;
// int& getref(int &x){
//     return x;
// }
// int main(){
//     int x=10;
//     getref(x)=20;
//     cout << "x: " << x << endl; 
//     return 0;
// }

