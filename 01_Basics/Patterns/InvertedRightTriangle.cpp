// write code that prints inverted right triangle pattern with numbers increasing towards right.

/*

1 2 3 4
1 2 3
1 2
1

*/

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter n : ";
    cin>>n;

    for(int i=0;i<n;i++){
        int num=1;
        for(int j=n-i; j>0 ; j--){
            cout<<num<<" ";
            num++;
        }
        cout<<endl;
    }
    return 0;
}