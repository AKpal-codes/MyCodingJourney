#include<iostream>
using namespace std;

int main(){
    int num,rev=0;

    cout<<"enter the number"<<endl;
    cin>>num;

    for(int i=num;i!=0;i=i/10)
        rev=(rev*10)+(i%10);

    cout<<"the reversed number is "<<rev;

    return 0;
}