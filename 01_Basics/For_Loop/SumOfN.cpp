//Print the sum of the first N natural numbers.

#include<iostream>
using namespace std;

int main(){
    int n,sum=0;

    cout<<"enter N :"<<endl;
    cin>>n;

    for(int i=1;i<=n;i++)
        sum=sum+i;
    cout<<sum;

    return 0;
}