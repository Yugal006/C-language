/*there are two types of headers
1) system header file - in built [eg. <iostream>]
2) user define hearder file [eg. try.y]
note if user define file is not present in folder code will throw error
*/
#include "try.y"
#include<iostream>
using namespace std;
int main(){
    //Assingment operators --> use to assing value to varibale
    int a ,b;
    cout<<"Enter the Number a:";
    cin>>a;

    cout<<"Enter the Number b:";
    cin>>b;

    cout<<"operators an it's type"<<endl;
    //Arithmatic operators
    cout<<"The value of "<<a<<" + "<<b<<" is: "<<a+b<<endl;
    cout<<"The value of "<<a<<" - "<<b<<" is: "<<a-b<<endl;
    cout<<"The value of "<<a<<" / "<<b<<" is: "<<a/b<<endl;
    cout<<"The value of "<<a<<" * "<<b<<" is: "<<a*b<<endl;
    cout<<"The value of "<<a<<" % "<<b<<" is: "<<a%b<<endl;
    cout<<endl;
    cout<<endl;
    //Unary operators
    cout<<"The value of a++ is: "<<a++<<endl;
    cout<<"The value of a-- is: "<<a--<<endl;
    cout<<"The value of ++a is: "<<++a<<endl;
    cout<<"The value of --a is: "<<--a<<endl;
    cout<<endl;
    cout<<endl;
    //Comparison operators
    cout<<"The value of "<<a<<" == "<<b<<" is: "<<(a==b)<<endl;
    cout<<"The value of "<<a<<" <= "<<b<<" is: "<<(a<=b)<<endl;
    cout<<"The value of "<<a<<" >= "<<b<<" is: "<<(a>=b)<<endl;
    cout<<"The value of "<<a<<" != "<<b<<" is: "<<(a!=b)<<endl;
    cout<<"The value of "<<a<<" < "<<b<<" is: "<<(a<b)<<endl;
    cout<<"The value of "<<a<<" > "<<b<<" is: "<<(a>b)<<endl;
    cout<<endl;
    cout<<endl;
    //Logical operatotrs
    cout<<"The value of (a==b) && (a<=b), logic 'and' operators is "<<((a==b) && (a<=b))<<endl;
    cout<<"The value of (a==b) || (a<=b), logic 'or' operators is "<<((a==b) || (a<=b))<<endl;
    cout<<"The negation logic opterators of (a==b) "<<! (a==b)<<endl;
    
    return 0;
   
}