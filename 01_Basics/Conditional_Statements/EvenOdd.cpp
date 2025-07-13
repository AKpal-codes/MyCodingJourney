//Check whether a number is even or odd.

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number to check"<<endl;
    cin>>n;

    if(n%2==0)
        cout<<"entered number is even";
    else
        cout<<"entered number is odd";
    return 0;
}