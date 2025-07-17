//Find the sum of digits of a number.

#include<iostream>
using namespace std;

int main(){
    int num,sum=0;

    cout<<"enter a number"<<endl;
    cin>>num;

    for(int i=num;i!=0;i=i/10)
        sum=sum+(i%10);

    cout<<"sum of digits is "<<sum;

    return 0;
}