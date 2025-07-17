// write a program to calculate LCM of two given numbers

//Hint : num1*num2=LCM*HCF

#include<iostream>
using namespace std;

int main(){
    int num1,num2,lcm,hcf;

    cout<<"enter two numbers : "<<endl;
    cin>>num1>>num2;

    int a=num1,b=num2;

    //calculating HCF
    if(num1>num2){
        if(num1%num2==0)
            hcf=num2;
        else{
            int rem=num1%num2;
            while(num2!=0){
                if(rem==0){
                    hcf=num2;
                    break;
                }
                else{
                int temp=rem;
                rem=num2%rem;
                num2=temp;
                }
            }
        }
    }
    else if(num2>num1){
        if(num2%num1==0)
            hcf=num1;
        else{
            int rem=num2%num1;
            while(num1!=0){
                if(rem==0){
                    hcf=num1;
                    break;
                }
                else{
                int temp=rem;
                rem=num1%rem;
                num1=temp;
                }
            }
        }
    }
    else
        hcf=num1;

    //calculating LCM
    lcm=(a*b)/hcf;

    cout<<"lcm of the digits is : "<<lcm;

    return 0;
}