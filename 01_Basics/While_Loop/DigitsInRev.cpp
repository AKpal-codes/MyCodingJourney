//Print digits of a number in reverse.

#include<iostream>
using namespace std;

int main(){
    int num;
     cout<<"enter a number";
     cin>>num;

     while(num!=0){
        cout<<num%10<<"\t";
        num=num/10;
     }

    return 0;
}