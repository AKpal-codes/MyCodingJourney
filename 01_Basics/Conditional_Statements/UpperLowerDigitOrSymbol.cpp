//Find whether a character is uppercase, lowercase, digit or symbol.

#include<iostream>
using namespace std;

int main(){
    char a;

    cout<<"enter a character"<<endl;
    cin>>a;

    if(a>='a' && a<='z')
        cout<<"entered character is a lowercase alphabet";
    else if(a>='A' && a<='Z')
        cout<<"entered character is an uppercase alphabet";
    else if(a>='0' && a<='9')
        cout<<"entered character is a digit";
    else
        cout<<"entered character is a symbol";

    return 0;
}
