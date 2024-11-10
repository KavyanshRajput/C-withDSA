//Check weather a no. is prime or not....
//PRIME NO--> no factors other that 1 and no. itself

#include <iostream>
using namespace std;
int main(){
int n;
cout<<"Enter a number : ";
cin>>n;
//By for loop and if else
// for(int i=2;i<=n-1;i++){
// if(n%i!=0){
// cout<<n<<" is a prime number.\n";
// break;}
// else
// cout<<n<<" is not a prime number.\n";
// break;
// }
//by bool
bool flag=true;//true means prime
for(int i=2;i<=n-1;i++){
    if(n%i==0){
        flag=false;//false means composite
        break;
    }
}
    if(n==1) cout<<"1 is neither prime nor composite.";
    else if(flag==true) cout<<n<<" is a prime number\n";
    else cout<<n<<" is not prime.\n";

    return 0;
}




