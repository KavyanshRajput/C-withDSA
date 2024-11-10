// Fibonacci series --> A series of number where each term is the sum of last two terms.
//WAP to print the nth fibonacci number .
#include<iostream>
using namespace std;
int main(){
int n,a = 1,b = 1,sum = 0;
cout<<"Enter a number: ";
cin>>n;
for (int i = 1;i <= n-2; i++){
    sum = a + b;
    a = b;
    b = sum;
}
 cout<<b<<endl;
return 0;
}