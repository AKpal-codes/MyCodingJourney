// Check whether a number is palindrome.

#include<iostream>
using namespace std;

int main(){
    int num;

    cout<<"enter a number : ";
    cin>>num;

    if(num==0){
        cout<<"Pallindrome";
        return 0;
    }
    if(num%10==0){
        cout<<"Not Pallindrome";
        return 0;
    }
    if(num<0){
        cout<<"Not Pallindrome";
        return 0;
    }
    int rev=0;
    while(num>rev){
        rev=(rev*10)+(num%10);
        if(num==rev){
            cout<<"Pallindrome";
            return 0;
        }
        else if(num/10==rev){
            cout<<"Pallindrome";
            return 0;
        }
        num=num/10;
    }
    cout<<"Not Pallindrome";
    return 0;
}