//Count how many times a given digit appears in a number.

#include<iostream>
using namespace std;

int main(){
    int num,digit,count=0;

    cout<<"enter a number : ";
    cin>>num;
    cout<<"enter the digit to check: ";
    cin>>digit;

    while(num!=0){
        if(num%10==digit)
            count++;
        num=num/10;
    }
    cout<<"The digit "<<digit<<" appears "<<count<<" times";
    return 0;
}