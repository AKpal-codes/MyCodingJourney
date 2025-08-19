//Take numbers as input until user enters a negative number, print sum.

#include<iostream>
using namespace std;

int main(){
    int num,sum=0;
    do{
        cout<<"Enter a number ";
        cin>>num;
        cout<<"entered number is : "<<num<<endl;
        sum+=num;
    }
    while(num>=0);

    cout<<"the sum is : "<<sum;

    return 0;
}