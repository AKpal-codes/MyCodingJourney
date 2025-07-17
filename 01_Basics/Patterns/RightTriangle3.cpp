// write code that prints right triangle pattern with 0s and 1s such that no adjacent instance is similar.

/*

1
0 1
1 0 1
0 1 0 1

*/

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter n : ";
    cin>>n;

    for(int i=0;i<n;i++){
        
        int val;
        if(i%2==0)
            val=1;
        else
            val=0;
            
        for(int j=0;j<=i;j++){
            if(val==1)
                cout<<val--<<" ";
            else
                cout<<val++<<" ";
        }
        cout<<endl;
    }
    return 0;
}