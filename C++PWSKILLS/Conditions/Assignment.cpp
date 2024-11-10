// #include <iostream>
// using namespace std;
// int main(){
// int x;
// cout<<"Enter first number:\n";
// cin>>x;
// cout<<"Enter second number and value for taking modulus\n";
// int y,m;
// cin>>y>>m;
// int Z = (x*y)%m;
// cout<<"Output is : "<<Z;
// }


// #include <iostream>
// using namespace std;
// int main()
// {
// int x;
// cout<<"Enter first number\n";
// cin>>x; // user will give 'x' a value.
// int y;
// cout<<"Enter second number\n";
// cin>>y; // user will give 'y' a value.
// cout<<(x!=y)<<" "<<(x>=y);
// }

// include <iostream>
// using namespace std;
// int main()
// {
// int x,y;
// cin>>x>>y;
// x+=y;
// x-=y;
// x%=y;
// cout<<x;
// }#

// #include <bits/stdc++.h>
// using namespace std; 
// int main() 
// { 
// if (int q = 0) 
// cout << "good"; 
// else
// cout << "excellent"; 
// return 0; 
// } 
// #include <iostream> 

// #include <stdio.h> 

// int main() 

// { 

// if (!(std::cout << "hello")) 

// std::cout << " world"; 

// else

// std::cout << " nothing"; 

 

// return 0; 

// }
// #include <iostream>
// using namespace std;
// int main(){
// int pi=3.14,r,h;
// cout<<"Enter the radius of the cylinder: \n";
// cin>>r;
// cout<<"Enter the height of the cylinder: \n";
// cin>>h;
// cout<<"The volume of cylinder is: "<<pi*r*r*h;
// return 0;

// }
#include <iostream>
using namespace std;
int main(){
    char a,b;
    cout<<" Enter two charactors and i'll tell the diffrence between their ascii value: ";
    cin>>a>>b;
    if(a>b){
        cout<<a-b;
    }
    else{
         cout<<b-a;
    }
    
    return 0;
}