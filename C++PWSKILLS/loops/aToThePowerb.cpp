#include <iostream>
using namespace std;
int main(){
int a,b;
float power=1;
cout<<"Enter the base number: "<<endl;
cin>>a;
cout<<"Enter the exponent: "<<endl;
cin>>b;
bool flag = true; // true means the number is positive 
if(b<0){
    flag = false; // false means power is negative
 b = -b;
}
for(int i=1;i<=b;i++){
    
    power=power*a;
}
if (flag == false){
    power = 1/power;
    b = -b;
}
if( a==0 && b==0) cout<<"Not defined";
else
cout<<" raised to the power "<<b<<" is "<<power;

return 0;
}