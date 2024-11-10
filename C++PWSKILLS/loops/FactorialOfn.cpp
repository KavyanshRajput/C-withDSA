// #include <iostream>
// using namespace std;
// int main(){
// int n;
// cout<<"Enter a number and i'll give you its factorial value: ";
// cin>>n;
// int i=1,fac=1;
// for(i=1;i<=n;i++){
//     fac=fac*i;
// }
// cout<<fac;
// return 0;
// }

#include <iostream>
using namespace std;
int main(){
int n,fac=1,i=1;
cout<<"Factorial of number :";
cin>>n;
for(i=1;i<=n;i++)
{
    fac=fac*i;
    cout<<"factorial of "<<i<<" is "<<fac<<endl;
    
}

return 0;
}