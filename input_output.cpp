#include<iostream>

using namespace std;

int main(){
    int num1 ,num2;
    cout<<"Enter value of num1:\n"; // '<<' is called insertion operators
    cin>>num1;//">>" is called extraction operators

    cout<<"Enter value of num2:\n";
    cin>>num2;

    cout<<num1+num2;
    return 0;
}