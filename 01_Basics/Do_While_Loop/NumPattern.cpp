//Print number pattern of given size.

#include<iostream>
using namespace std;

int main(){
    int lim,i=0;
    cout<<"enter a number : ";
    cin>>lim;

    if(lim<0)
        return 0;
        
    do{
        cout<<i<<"\t";
        i++;
    }
    while(i!=lim);

    return 0;
}