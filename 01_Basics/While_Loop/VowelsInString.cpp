//Count number of vowels in an input string.

#include<iostream>
using namespace std;

int main(){
    string a;
    int count=0,i=0;

    cout<<"enter a string ";
    getline(cin, a);

    while(a[i]!='\0'){
        if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u'||a[i]=='A'||a[i]=='E'||a[i]=='I'||a[i]=='O'||a[i]=='U')
            count++;
        i++;
    }

    cout<<"There are "<<count<<" vowels in the given string";
    return 0;
}