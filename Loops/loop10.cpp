#include<iostream>
using namespace std;
int main(){
    int  n,i;
    cout<<"Enter a number: ";
    cin>>n; 
    if(n<2){
        cout<<" Number is not prime ";
        return 0;
    }
    else{
        for (i=2;i<n;i=i+1){
            if(n%i==0){
                cout<<"not prime";
                return 0;
            }
            cout<<"Prime Number";
        }
    }
    return 0;
}