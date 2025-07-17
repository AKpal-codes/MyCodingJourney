// write code that prints triangle pattern with numbers increasing downwards.

/*

    1
   2 2
  3 3 3
 4 4 4 4
5 5 5 5 5

*/

#include<iostream>
using namespace std;

int main(){
    int n;

    cout<<"enter n : ";
    cin>>n;

    for(int i=0;i<n;i++){
        for(int j=n-i-1;j>0;j--)
            cout<<" ";
        for(int k=0;k<=i;k++)
            cout<<i+1<<" ";
        cout<<endl;
    }

    return 0;
}