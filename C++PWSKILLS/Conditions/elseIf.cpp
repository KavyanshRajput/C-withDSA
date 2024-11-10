//MARKS AND GRADES OF STUDENTS
#include <iostream>
using namespace std;
int main(){
int n;
cout<<"Enter your marks: ";
cin>>n;
// if(n>=91 && n<=100){
//     cout<<"Excellent";
// }
// if(n>=81 && n<=90){
//     cout<<"Very Good";
// }
// if(n>=71 && n<=80){
//     cout<<"Good";

// }
// if(n>=61 && n<=70){
//     cout<<"Can Do Better";

// }
// if(n>=51 && n<=60){
//     cout<<"Average";
// }
// if(n>=41 && n<= 50){
//     cout<<"Below Average";

// }
// if(n>=0 && n<=40){
//     cout<<"Fail";
// }




//IfElse Ladder

// if (n>=91&& n<=100) {
//     cout<<"Excellent";
//         }
//         else{
//             if(n>=81){
//         cout<<"Very Good";
//             }
//             else{
//                 if(n>=71){
//                     cout<<"Good";
//                 }
//                 else{
//                     if(n>=61){
//                         cout<<"Can do better";
//                     }
//                     else{
//                         if(n>=51){
//                             cout<<"Average";
                    
//                         }
//                         else{
//                             if(n>=41){
//                                 cout<<"Below Average";
//                             }
//                             else{
//                                cout<<"Fail";
//                             }
//                         }
                        
//                     }
//                 }
//             }
              
//         }
    

//ElseIf................

if (n>=91 ){
    cout<<"Excellent";
}

else if(n>=81){
    cout<<"Very Good";
}
else if (n>=71){
    cout<<"Good";

}
else if (n>=61){
    cout<<" Can doi better ";

}
else if (n>=51){
    cout<<"Average";

}
else if (n>=41){
    cout<<"Below Average";

}
else{
    cout<<"Fail";
}
 return 0;

}
