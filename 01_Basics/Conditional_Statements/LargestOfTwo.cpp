//Find the largest of two numbers.

#include<iostream>
using namespace std;

int main(){
    int a,b;
    cout<<"enter two numbers"<<endl;
    cin>>a>>b;

    if(a==b)
        cout<<"you've entered equal numbers";
    else if(a>b)
        cout<<a<<" is greater than "<<b;
    else
        cout<<b<<" is greater than "<<a;

    return 0;
}