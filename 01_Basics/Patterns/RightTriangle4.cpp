// write code that prints right triangle pattern with increasing numbers.

/*

1
2 5
3 6 8
4 7 9 10

*/

#include<iostream>
using namespace std;

int main(){

    int n;

    cout << "Enter n";
    cin>>n;

    for(int i=0;i<n;i++){
        int val=i+1;
        for(int j=0;j<=i;j++){
            if(j==0)
                cout<<i+1<<" ";
            else{
                val=val+(n-j);
                cout<<val<<" ";
            }
        }
        cout<<endl;
    }
}