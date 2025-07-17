// write code that prints a square pattern with numbers such that the center is 1 and the numbers increase outwards.

/*

4 4 4 4 4 4 4
4 3 3 3 3 3 4
4 3 2 2 2 3 4
4 3 2 1 2 3 4
4 3 2 2 2 3 4
4 3 3 3 3 3 4
4 4 4 4 4 4 4

*/

#include<iostream>
#include<cstdlib>
#include<algorithm>

using namespace std;

int main(){
    int n;
    cout<<"enter n : ";
    cin>>n;

    for(int i=0;i<(2*n)-1;i++){
        for(int j=0;j<(2*n)-1;j++)
            cout<<max(abs(n-i-1)+1,abs(n-j-1)+1)<<" ";
            cout<<endl;
    }
    return 0;
}