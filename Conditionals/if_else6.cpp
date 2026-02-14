#include<iostream>
using namespace std;
int main()
{
    int number, positive,negative,zero;
    cout<<"Enter a number: ";
    cin>>number;
    if(number>0)
    {
        cout<<"positive";
    }
    else{
        if(number==0){
            cout<<"zero";
        }
        else{
            cout<<"negative";
        }
        
    }
}