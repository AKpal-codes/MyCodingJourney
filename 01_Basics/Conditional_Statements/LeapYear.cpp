//Check if a year is a leap year.

#include <iostream>
using namespace std;

int main(){
    int year;
    cout<<"enter a year to check"<<endl;
    cin>>year;

    if(year%100==0 && year%400==0)
        cout<<"year is leap year";
    else if(year%4==0 && year%100!=0)
        cout<<"year is Leap year";
    else
        cout<<"year is not a leap year";

    return 0;
}