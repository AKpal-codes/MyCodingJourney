//Check if a number is divisible by 5 and 11.

#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"enter a number to check"<<endl;
    cin>>num;

    if(num%5==0 && num%11==0)
        cout<<"number is divisible by 5 & 11";
    else
        cout<<"number is not divisible by 5 & 11";

    return 0;
}