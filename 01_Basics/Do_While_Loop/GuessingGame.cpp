//Guessing game: keep taking user input until correct number is guessed.

#include<iostream>
using namespace std;

int main(){
    int actual=0,guessed, count=0;

    do{
        cout<<"guess the number : ";
        cin>>guessed;
        count++;
        if(guessed!=actual)
            cout<<"Wrong answer !! try again..."<<endl;
    }
    while(guessed!=actual);

    cout<<"Congratulations you guessed it right !!"<<endl<<"Number of tries : "<<count;

    return 0;
}