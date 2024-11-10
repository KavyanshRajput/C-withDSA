// #include <iostream>
// using namespace std;
// int main(){
// int x; 
// cout<<"Enter a number"<<endl;
// cin>>x;
// //condition ? true : false
// (x%2==0) ? cout<<"EVEN" : cout<<"Odd";
// return 0;
// }
// #include<iostream>
// using namespace std;
// int main(){
// int n;
// cout<<"Enter your marks: ";
// cin>>n;
// (n>=33 && n<=100) ? cout<<"Pass" : cout<<"Fail";

//     return 0;
// }


#include <iostream>
using namespace std;
int main(){
int x;
//nesting in ternary operator
x = 5>8 ? 10 :(1!=2<5 ? 20 : 30);
cout<<"Value of x is "<<x;
    return 0;
}