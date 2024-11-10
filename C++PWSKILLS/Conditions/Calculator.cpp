#include <iostream>
using namespace std;
int main(){
int a , b ;
char op ;
cout<<"Enter the Problem: ";
cin>>a>>op>>b;
 
//  if(op=='+') cout<<a+b;
//  if (op=='-') cout<<a-b;
//  if(op=='*') cout<<a*b;
//  if(op=='/') cout<<a/b;


//by switch case...............
switch (op){
    case '+':
    cout<<a+b;
    break;

    case '-':
    cout<<a-b;
    break;

    case '*':
    cout<<a*b;
    break;

    case '/':
    cout<<a/b;
    break; 
}




    return 0;
}