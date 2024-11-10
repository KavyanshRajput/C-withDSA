// #include<iostream>
// using namespace std;
// int main(){
// int i=1,n,sum=0;
// cout<<"Enter a number: ";
// cin>>n;
// for(i=1;i<=n;i++){
//     if(i%2!=0)sum =sum+i;
//     else sum = sum-i;
// }

// //without loops
// // if(n%2==0) sum=-n/2;
// // else 
// // sum= (n/2)+1;
// cout<<sum;


// return 0;
// }

#include <iostream>
using namespace std;
int main(){ 
    int n,m,marks,sum;
cout<<"Enter the no. of subjects: "<<endl;
cin>>n;
cout<<"Entere maximum marks: ";
cin>>m;
for(int i=1;i<=n;i++){
    cout<<"Subject"<<i<<":";
    cin>>marks;
}
    return 0;
}