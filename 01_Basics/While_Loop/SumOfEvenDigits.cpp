//Sum of even digits in a number.

#include<iostream>
using namespace std;

int main(){
    int num,sum=0;
    
    cout<<"enter the number :"<<endl;
    cin>>num;

    while(num!=0){
        if((num%10)%2==0)
            sum=sum+(num%10);
        num=num/10;
    }
    cout<<"sum of even digits in the given number is "<<sum;
    return 0;
}