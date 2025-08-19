//Check whether a number is Armstrong.

#include<iostream>
using namespace std;

int main(){
    int num, count=0, temp, sum=0;
    cout<<"enter a number : ";
    cin>>num;

    temp=num;
    while(temp!=0){
        count++;
        temp=temp/10;
    }

    temp=num;
    while(temp!=0){
        int pow=1,loop=count;
        while(loop!=0){
            pow *= temp%10;
            loop--; 
        }
        sum = sum + pow;
        temp=temp/10;
    }
    if(sum==num)
        cout<<"Armstrong number";
    else
        cout<<"Not an Armstrong Number";

    return 0;
}