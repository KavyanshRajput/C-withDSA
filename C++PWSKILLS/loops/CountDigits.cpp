//COUNT THE NUMBER OF DIGITS IN A NUMBER GIVEN BY  USER
// #include <iostream>
// using namespace std;
// int main(){
// int n;
// cout<<"Enter a value: ";
// cin>>n;
// int count = 0;
// int a=n;
// while(n>0){
//     n/=10;
//     count++;
// }
// if(a==0) cout<<1;
// else cout<<count;

//     return 0;
// }

//WPA to prnint sum of digits of a given number.....
#include<iostream>
using namespace std;
int main(){
int n,sum=0;
cout<<"Enter a value: ";
cin>>n;
int last_digit=0 ;
while(n>0){
last_digit=n%10;
sum+=last_digit;
n/=10;
}
cout<<sum;
return 0;
}