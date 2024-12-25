#include<iostream>

using namespace std;
int x_global = 27;
void sum(){
    int a = 0;
    int b = 5;
    cout<<x_global;
}

int main(){
    cout<<"About varibale type\n";
/*
    int a = 5;
    int b = 6;
*/
    int x_global = 69;
    sum();
/*
    int a = 5, b = 6;
    float c = 3.14;
    char d = 'Y';
    bool e = false;//false = 0 , true = 1
    cout<<"\ninteger type: "<<a+b<<"\nfloat: "<<c<<"\nthis is char + tab key\t:"<<d<<"\nboolean: "<<e;
*/
    cout<<"\n"<< x_global;
    x_global = 88;
    cout<<"\n"<< x_global;
    return 0; 
}