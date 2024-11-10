// #include<iostream>
// using namespace std;
// int main(){
// int n,m;
// cout<<"Enter no. of rows: ";
// cin>>n;
// cout<<"Enter no. of columns: ";
// cin>>m;
// for(int i = 1; i<=n; i++){
//     for(int j=1;j<=m;j++){
//         //You can put n at the place of m to print a square

//         cout<<" * ";
//     }
//     cout<<endl;
// }
// }
#include <iostream>
using namespace std;
int main(){
int n;
cout<<"Enter the side of the square: ";
cin>>n;
for (int i=1;i<=n;i++){
    for(int j=1;j<=n;j++){
    cout<<" * ";
    }
    cout<<endl;
}

}