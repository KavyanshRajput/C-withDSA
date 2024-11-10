//QUESTION......
//Take a positive integer input and tell if it is divisible by 5 or 3 but not divisible bt 15..
// #include <iostream>
// using namespace std;
// int main(){
// int n;
// cout<<"Enter any positive integer: ";
// cin>>n;
// if((n%5==0 || n%3==0) && n%15!=0){
//     cout<<"The number is divisible by 5 or 3 but not 15";

// }

// else{
//     cout<<"Not matching the condition";
// }




//...........BY NESTED IF ELSE...................

//  if (n%5==0|| n%3==0){
//     if(n%15!=0){
//         cout<<"The number satisfies the given condition ";
//     }
//     else{
//         cout<<"Not matching condition";
//     }
//  }
// else{
//     cout<<"Not matching the condition";
// }


//     return 0;

// }

#include <iostream>
using namespace std;
int main(){
int n;
cout<<"Enter a positive integer: ";
cin>>n;
if (n%5==0){
    if(n%3==0){
        cout<<"The number satisfies the condition.";
    }
    else{
        cout<<"The number does not satisfies  the condition.";
    }
}
else{
    cout<<"The number does not satisfies the condition.";
}


return 0;
}

