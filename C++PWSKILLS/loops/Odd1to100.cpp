#include<iostream>
using namespace std;
int main(){
int n=1;
for(n=1;n<=100;n++){
    // if(n%2!=0) cout<<n<<endl;
  if(n%2==0)
  continue;//skip this round or iteration
  cout<<n<<endl;
}
    return 0;
}