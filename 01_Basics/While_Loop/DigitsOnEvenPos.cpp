//print the digits at the even positions in a given number

#include<iostream>
using namespace std;

int main(){
    int num,rev=0,i=1;
    
    cout<<"enter the number :"<<endl;
    cin>>num;

    while(num!=0){
        rev=(rev*10)+(num%10);
        num=num/10;
    }

    while(rev!=0){
        if(i%2==0)
            cout<<rev%10<<"\t";
        i++;
        rev=rev/10;
    }
    return 0;
}