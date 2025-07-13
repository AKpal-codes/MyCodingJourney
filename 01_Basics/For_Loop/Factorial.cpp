//Find the factorial of a number.

#include<iostream>
using namespace std;

int main(){
    int num,fact=1;

    cout<<"Factorial of ?"<<endl;
    cin>>num;

    for(int i=2;i<=num;i++)
        fact*=i;

    cout<<"factorial of "<<num<<" is "<<fact;
    return 0;
}