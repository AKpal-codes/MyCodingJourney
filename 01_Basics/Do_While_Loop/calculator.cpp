//Create a simple calculator that runs until user exits.

#include<iostream>
using namespace std;

int main(){
    float num1,num2,calc=NULL;
    char op;

    

    do{
        cout<<"enter two numbers a and b ";
        cin>>num1>>num2;

        cout<<"enter + for a+b\nenter - for a-b\nenter * for a x b\nenter / for a/b\nenter x to close\n";
        cin>>op;

        if(op=='+')
            calc = num1+num2;
        else if(op=='-')
            calc = num1-num2;
        else if(op=='*')
            calc==num1*num2;
        else if(op=='/')
            calc==num1/num2;
        else
            cout<<"wrong selection !! enter correct operation...";

        if(calc != NULL)
            cout<<"Output : "<<calc;
    }
    while(op!='x'||op!='X');
}