#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n for pattern to be printed: ";
    cin>>n;
    for(int i=1;i<=n;i++){
        cout<<"Row "<<i<<":   ";
        for(int j=1;j<=n;j++){
        cout<< j <<" ";
        }
        cout<<endl;
    }
}