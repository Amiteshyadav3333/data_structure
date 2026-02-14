#include<iostream>
using namespace std;
int main(){
    // int num;
    // cout<<" Enter a number :";
    // cin>>num;
    // for(num=1;num<=10;num=num+1){
    //     cout<<"hello Coder Army\n";
    // }

    int num;
    cout<<"Enter the number:";
    cin>>num;

    for(int count = 1; count<= num; count = count+1){
        cout<< count <<" squre is :"<<count*count<<endl;
    }
}