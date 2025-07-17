// write a program to calculate HCF of two given numbers

//Hint : HCF algo => 1- divide bigger by smaller 2- if remainder is not 0 divide smaller by remainder 3- repeat

#include<iostream>
using namespace std;

int main(){
    int a,b,hcf;
    cout<<"enter two numbers"<<endl;
    cin>>a>>b;

    cout<<"HCF of "<<a<<" and "<<b<<" is : ";
    
    if(a>b){
        if(a%b==0)
            hcf=b;
        else{
            int rem=a%b;
            while(b!=0){
                if(rem==0){
                    hcf=b;
                    break;
                }
                else{
                    int temp=rem;
                    rem=b%rem;
                    b=temp;
                }
            }
        }
            
    }
    else if(b>a){
        if(b%a==0)
            hcf=a;
        else{
            int rem=b%a;
            while(a!=0){
                if(rem==0){
                    hcf=a;
                    break;
                }
                else{
                    int temp=rem;
                    rem=a%rem;
                    a=temp;
                }
            }
        }
    }
    else
        hcf=a;

    cout<<hcf;

    return 0;
}