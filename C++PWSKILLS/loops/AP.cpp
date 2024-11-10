//Daisplay this AP - 1,3,5,7,9....upto 'n' terms.
//in mathematics 
//we know a=1 , d=2
//an= a+(n-1)d
//1+(n-1)2
// //2n-1
// #include <iostream>
// using namespace std;
// int main(){
//     int n,i;
// cout<<"Enter the value of n: \n";
// cin>>n;

// //......BY ARTHEMATIC PROGRESSION.....
// // for(i=1;i<=(2*n)-1;i=i+2){
// //     cout<<i<<endl;
// // }

// //.........WITHOUT AP...............
// //seperate variable
// //AP-->4,7,10,13....
// int a = 4;
// for(i=1;i<=n;i++){
//     cout<<a<<endl;
//     a=a+3;
// }
// }

//DISPLAY THID GP--> 1,2,4,8,16.......
// #include <iostream>
// using namespace std;
// int main(){
// int n,a=1,i;
// cout<<"Enter value of n: ";
// cin>>n;

//  for(i=1;i<=n;i++){
//     cout<<a<<endl;
//     a= a * 2;}
//     return 0;
// }

//CODE FOR FINDING Nth TERM OF A AP............
#include <iostream>
using namespace std ;
int main()
{
    int a,b,d,n,s,i;
    cout<<"Enter first term: ";
    cin>>a;
    cout<<"Enter second term: ";
    cin>>b;
    d=b-a;

    cout<<"Enter n: ";
    cin>>n;

    for(i=1;i<=n;i++){
        s=a+(n-1)*d;
    }
    cout<<n<<"th term= "<<s;
}
