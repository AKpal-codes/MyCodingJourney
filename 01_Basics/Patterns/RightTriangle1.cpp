// write code that prints right triangle pattern with numbers increasing towards right.

/*

1
1 2
1 2 3
1 2 3 4

*/

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter n : ";
    cin>>n;

    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++)
            cout<<j+1<<" ";
        cout<<endl;
    }
    return 0;
}