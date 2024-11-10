// switch(integer expression){
//     case constant 1 :
//     do this;
//     case constant 2:
//     do this;
//     case constant 3:
//     do this;
//     default :
//     do this ;
// }
//Write a program to input day number(1-7) and print day of week name using switch case.
// #include <iostream>
// using namespace std;
// int main(){
//     int x;
//     cout<<"Enter the day number: ";
//     cin>>x;
//     switch(x){
//         case 1:
//         cout<<"Monday";
//         break;
//         case 2 :
//         cout<<"Tuesday";
//         break;
//         case 3 :
//         cout<<"Wednesday";
//         break;
//         case 4:
//         cout<<"Thursday";
//         break;
//         case 5 :
//         cout<<"Friday";
//         break;
//         case 6 :
//         cout<<"Saturday";
//         break;
//         case 7:
//         cout<<"Sunday";
//         break;
//         default:
//         cout<<"Invalid Number";
//         break;
//     }
//     return 0;
// }


//Write a code to input month number and print total no. of days in month using switch case.


// #include<iostream>
// using namespace std;
// int main(){
// int m;
// cout<<"Enter the number from 1-12 and i'll tell you the no. of days in that month. "<<endl;
// cin>>m;
// switch (m){
// case 1:
// cout<<"31 Days";
// break;

// case 2:
// cout<<"28 and 29 on leap year";
// break;

// case 3:
// cout<<"31 days";
// break;

// case 4:
// cout<<"30 days";
// break;

// case 5:
// cout<<"31 days";
// break;

// case 6:
// cout<<"30 days";
// break;

// case 7:
// cout<<"31 days";
// break;

// case 8:
// cout<<"31 days";
// break;

// case 9:
// cout<<"30 days";
// break;

// case 10:
// cout<<"31 days";
// break;

// case 11:
// cout<<"30 days";
// break;

// case 12:
// cout<<"31 days";
// break;
// default:
// cout<<"Invalid Number ";
// break;
// }
//  return 0;
// }



//...SWITCH CONDITION...............


//ERRORRRRRRRRRRRRRRRRRRRRRR............................
// #include<iostream>
// using namespace std;
// int main(){
// int m;
// cout<<"Enter the number from 1-12 and i'll tell you the no. of days in that month. "<<endl;
// cin>>m;
// // 1 3 5 7 8 10 12--> 31 days
// //2 --> 28 and 29 days
// // 4 6 9 11 --> 30 days
// switch ((m<=7 && m%2!=0)&& (m>=8 && m%2==0 && m<=12)){
//     case 1:
//     cout<<"31 days";
//     break;
// }

// switch {
//     cout<<"31 days";
// break;
// }
// switch (m==4 || m==6 || m==9 || m==11){
//     cout<<" 30 days";
// break;
// }

// switch(2){
//     cout<<"28 days and 29 on leap year";
// break;
// }
//  return 0;
// }





