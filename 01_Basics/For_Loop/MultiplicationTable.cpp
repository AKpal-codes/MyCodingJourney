//Print multiplication table of a given number.

#include<iostream>
using namespace std;

int main(){
    int num;

    cout<<"Table of ? "<<endl;
    cin>>num;

    for(int i=1;i<=10;i++)
    {
        cout<<num<<" x "<<i<<" = "<<num*i<<endl;
    }
    return 0;
}