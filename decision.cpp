#include<iostream>
using namespace std;
int main(){
    // int num;
    // cout<<"enter the no.";
    // cin>>num;
    // if(num>0){
    //     cout<<"positive";

    // }
    // else if(num<0){
    //     cout<<"negative";
    // }
    // else{
    //     cout<<"the no. is zero";
    // }
    // return 0;
    // int a,b,c,d;
    // cout<<"enter a,b,c";
    // cin>>a>>b>>c>>d;
    // if(a>b && a>c && a>d){
    //     cout<<"a is greatest";
    // }
    // else if(b>a && b>c && b>d){
    //     cout<<"b is greatest";
    // }
    // else if(d>a && d>c && d>b){
    //     cout<<"d is greatest";
    // }
    // else{
    //     cout<<"c is greatest";
    // }
    // return 0;
    // char c;
    // cout<<"enter char: ";
    // cin>>c;
    // switch (c)
    // {
    // case 'a':;
    // case 'e':;
    // case 'i':;
    // case 'o':;
    // case 'u':;
    // case 'A':;
    // case 'E':;
    // case 'I':;
    // case 'O':;
    // case 'U':;
    // cout<<c<<" is vowel"<<endl;
    // break;
    
    // default:
    // cout<<c<<" is consonant"<<endl;
    // }  
    // }
//find the largest and lowest out of four numbers
int a,b,c,d;
cin>>a>>b>>c>>d;
if(a>b && a>c && a>d){
    cout<<" is greatest"<<a;
}
else if(a<b && a<c && a<d){
    cout<<" is smallest"<<a;
}
else if(b<a && b<c && b<d){
    cout<<" is smallest"<< b;
}
else if(b>a && b>c && b>d){
    cout<<" is greatest"<<b;
}
else if(c<b && c<a && c<d){
    cout<<" is smallest"<<c;
}
else if(c>b && c>d && c>a){
    cout<<" is greatest"<<c;
}
else if(d<b && d<c && d<a){
    cout<<" is smallest"<<d;
}
else if(d>b && d>c && d>a){
    cout<<" is greatest"<<d;
}
cout<<endl;

}
