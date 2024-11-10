// SOME IMP ASCII VALUES --> a= 97, A=65 , 0=48


#include <iostream>
using namespace std;
int main (){
char ch;
cout<<"Enter the charector: ";
cin>>ch;
//a b c,A B C, 1 2 3,@#$ these all are Charectors also the integers are also included in charector
int ascii=(int)ch;

if ((ascii>=97 && ascii<=122) || (ascii>=65 && ascii<=90)){
    cout<<"The charector is an alphabet. ";

}
else{
    cout<<"The charector is not an alphabet.";
}


    return 0;
}