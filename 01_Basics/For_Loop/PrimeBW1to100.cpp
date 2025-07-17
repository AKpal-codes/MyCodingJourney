//Print all prime numbers between 1 and 100.

#include<iostream>
using namespace std;

int main(){
    cout<<"Prime numbers between 1 and 100 are :"<<endl;

    for(int i=2;i<100;i++){
        int flg=0;
        for(int j=2;j<i;j++){
            if(i%j==0){
                flg=1;
                break;
            }    
        }
        if(flg==0)
            cout<<i<<"\t";
    }
    return 0;
}