#include<iostream>
using namespace std;
int main()
{
    int n,row,col;
    cout <<"Enter a number: ";
    cin>>n;
    char name ='A';
    for(row=1;row<=n;row=row+1){
        for(col=1;col<=n-row;col=col+1){
            cout<<" ";
        }
        for(col=1;col<=row;col++){
            cout<<name<<" ";
        }
        cout<<endl;
    }
    return 0;
}

