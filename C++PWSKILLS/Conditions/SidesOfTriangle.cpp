#include<iostream>
using namespace std;
int main(){
int a,b,c;
cout<<"Enter three lengths and i'll tell you if they can be the sides of a triangle"<<endl;
cin>>a>>b>>c;
if ((a+b>c) && (a+c>b) && (b+c>a)){
    cout<<"The given lengths can be the sides of a triangle.";

}
else{
    cout<<" The given lengths cannot be the sides of a triange.";

}



    return 0;

}