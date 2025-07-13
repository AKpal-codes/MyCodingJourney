//Assign grades based on marks (90+: A, 80–89: B, etc.).

#include<iostream>
using namespace std;

int main(){
    int marks;
    cout<<"enter marks of the student"<<endl;
    cin>>marks;

    if(marks>=90)
        cout<<"S Grade";
    else if(marks>=80)
        cout<<"A Grade";
    else if(marks>=70)
        cout<<"B Grade";
    else if(marks>=60)
        cout<<"C Grade";
    else if(marks>=50)
        cout<<"D Grade";
    else if(marks>=40)
        cout<<"E grade";
    else
        cout<<"Failed";

    return 0;
}