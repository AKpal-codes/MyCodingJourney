//Input characters until a digit is found.

#include<iostream>
using namespace std;

int main(){
    char inp;

    do{
        cout<<"enter a character : ";
        cin>>inp;
        
        cout<<"input character : "<<inp<<endl;
    }
    while(inp < '0' || inp > '9');

    return 0;

}