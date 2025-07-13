//Check if a number is positive, negative or zero.

#include<iostream>
using namespace std;

int main(){
int n;

cout<<"enter a number to check "<<endl;
cin>>n;

if(n==0)
    cout<<"you've entered 0";
else if(n>0)
    cout<<"you've entered a positive number";
else
    cout<<"you've entered a negative number";
    
return 0;
}