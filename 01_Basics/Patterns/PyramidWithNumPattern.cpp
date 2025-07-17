// write code that prints a pyrammid pattern with numbers such that the center is 1 and the numbers increase outwards.

/*

      1
    2 1 2
  3 2 1 2 3
4 3 2 1 2 3 4

*/

#include<iostream>
using namespace std;
#include<cstdlib>

int main(){
    int n;

    cout<<"enter n : ";
    cin>>n;

    for(int i=1;i<=n;i++){
        for(int j=n-i;j>0;j--)
            cout<<"  ";
        for(int k=1;k<(i*2);k++)
            cout<<abs(i-k)+1<<" ";
        cout<<endl;
    }
    return 0;
}