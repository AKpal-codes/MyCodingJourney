//Generate a number until sum of digits becomes a single digit.

#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main(){
    int RandomNumber,sum=10;
    
    while(sum>=10){
        sum=0;
        srand(time(NULL));
        RandomNumber = rand();
        cout<<"Generated Number = "<<RandomNumber<<endl;
        while(RandomNumber!=0){
            sum = sum + RandomNumber%10;
            RandomNumber /= 10;
        }
        cout<<"Sum of Digits of Random number : "<<sum<<endl;
    }
    return 0;
}