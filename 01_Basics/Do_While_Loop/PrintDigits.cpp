//Print digits of a number until all are processed.

#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter a number : ";
    cin>>num;

    do{
        cout<<num%10<<endl;
        num=num/10;
    }
    while(num!=0);

    return 0;
}