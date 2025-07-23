#include<iostream>

using namespace std;
int main(){
    // int n;
    // cin>>n;
    // for(int i=1;i<=2*n-1;i++){
    //     int s= (i<=n) ? (n-i+1): (i-n+1);
    //     for (int j=1;j<=s;j++)
    //     cout<<"* ";
    //     cout<<endl;
    // }
    // return 0;

    // int n;
    // int sp=0;
    // cin>>n;
    // int st=n/2+1;
    // for(int i=1;i<=n;i++){ 
    //     for( int i=1;i<=sp;i++){
    //         cout<<" ";
    //     }
    //     for(int k=1;k<=st;k++){
    //         cout<<"*";}
    //     cout<<endl;
    //     if(i<n/2+1){ 
    //         sp=sp+1;
    //         st=st-1;}
    //     else{
    //         sp=sp-1;
    //         st=st+1;}  }}


int n;
cin>>n;
int space = -1;
int star=n+1;

for(int i=1;i<=2*n-1;i++){
    if(i<=n){
        space++;
        star--;
    }
    else{
        space--;
        star++;
    }
    for(int j=1;j<=space;j++){
        cout<<" ";
    }
    for(int k=1;k<=star;k++){
        cout<<"*";

    }
    cout<<endl;
}
}