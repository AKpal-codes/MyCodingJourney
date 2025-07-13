//Check whether a character is a vowel or consonant.

#include<iostream>
using namespace std;

int main(){
    char c;

    cout<<"Enter a character to check"<<endl;
    cin>>c;

    if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U')
        cout<<"entered charater is a vowel";
    else if((c>='b' && c<='z') || (c>='B' && c<='Z'))
        cout<<"entered charater is a consonant";
    else
        cout<<"entered character is not an alphabet";
    return 0;
}