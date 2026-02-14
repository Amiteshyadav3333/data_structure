#include<iostream>
using namespace std;
int main()
{
    int row, col ;
    char name ='a';
    for(row=1;row<=5;row=row+1){
        for(col=row;col>=1; col=col-1){
            cout<<name<<" ";

        }
        cout<<endl;
    }
    return 0;
}