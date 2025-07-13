//Find the largest of three numbers.

#include<iostream>
using namespace std;

int main(){
    int a,b,c;

    cout<<"enter three numbers to compare "<<endl;
    cin>>a>>b>>c;

    if(a>=b){
        if(c>a)
            cout<<c<<" is greatest of all";
        else if(a==c && a==b)
            cout<<"all numbers are equal";
        else if(a==b)
            cout<<a<<" and "<<b<<" are equal and greater than "<<c;
        else
            cout<<a<<" is greatest of all";
    }
    else{
        if(c>b)
            cout<<c<<" is greatest of all";
        else if(c==b)
            cout<<c<<" and "<<b<<" are equal and are greater than "<<a;
        else
            cout<<b<<" is greatest of all";
    }
    return 0;
}

