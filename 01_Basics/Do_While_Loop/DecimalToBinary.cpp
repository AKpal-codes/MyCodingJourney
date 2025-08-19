//Convert decimal to binary using repeated division.

#include<iostream>
using namespace std;

int main(){
    int num,bin=0;

    cout<<"enter a number : ";
    cin>>num;

    do{
        bin = (bin*10) + num%2;
        num /= 2;
    }
    while(num!=0);

    cout<<"the binary conversion is : ";

    do{
        cout<<bin%10<<"\t";
        bin /= 10;
    }
    while(bin!=0);

    return 0;

}