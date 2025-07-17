// write code that prints hollow square pattern using asterisks (*).

#include<iostream>
using namespace std;

int main(){
    int n;

    cout<<"enter value to n : ";
    cin>>n;

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==0||i==n-1||j==0||j==n-1)
                cout<<"* ";
            else
                cout<<"  ";
        }
        cout<<endl;
    }
    return 0;
}