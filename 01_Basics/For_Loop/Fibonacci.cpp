//Print Fibonacci series up to N terms.

#include<iostream>
using namespace std;

int main(){
    int n,first=1,second=1;

    cout<<"Fibonacci series upto how many terms ?"<<endl;
    cin>>n;

    if(n<=0)
        return 0;
    else if(n==1)
        cout<<'1';
    else
        cout<<"1\t1\t";
        for(int i=2;i<n;i++){
            cout<<first+second<<"\t";
            second=first+second;
            first=second-first;
        }
    return 0;
}