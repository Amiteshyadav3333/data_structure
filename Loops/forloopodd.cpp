#include<iostream>
using namespace std;
int main(){
    // odd number
    int num;
    cout<<"Enter the number:";
    cin>>num;

    for(int count = 1; count<= num; count = count+2){
        cout<< count <<" odd  is :"<<count<<endl;
    }
}