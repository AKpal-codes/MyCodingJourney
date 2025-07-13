//Count digits in a number.

#include<iostream>
using namespace std;

int main(){
    int num,digits=0;

    cout<<"enter a number"<<endl;
    cin>>num;

    for(int i=num;i>0;i=i/10)
        digits++;

    cout<<"the entered number have "<<digits<<" digits";

    return 0;
}