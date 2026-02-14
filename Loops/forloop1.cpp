#include<iostream>
using namespace std;
int main(){
    // even number
    int num;
    cout<<"Enter the number:";
    cin>>num;

    for(int count = 0; count<= num; count = count+2){
        cout<< count <<" squre is :"<<count<<endl;
    }
}