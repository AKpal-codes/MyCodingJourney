//Check if a triangle is valid given three angles.

#include<iostream>
using namespace std;

int main(){
    int a,b,c;
    cout<<"enter the three angles of the triangle"<<endl;
    cin>>a>>b>>c;

    if(a<=0||b<=0||c<=0)
        cout<<"invalid";
    else if(a+b+c==180)
        cout<<"valid";
    else
        cout<<"Invalid";

    return 0;
}