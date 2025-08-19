//Keep taking input until user enters 0 and print the sum.

#include<iostream>
using namespace std;

int main(){
    int input=1,sum=0;

    while(input!=0){
        cout<<"enter a number : ";
        cin>>input;
        sum += input;
    }

    cout<<"sum of all the numbers entered is : "<<sum;

    return 0;
}