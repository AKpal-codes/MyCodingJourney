//Print menu until user chooses "exit".

#include<iostream>
using namespace std;

int main(){
    int inp;
    do{
        cout<<"choose a value from the menu below :\nenter 1 for choosing option A\nenter 2 for choosing option B\nenter 3 to exit\n";
        cin>>inp;
        if(inp==1)
            cout<<"you chose option A"<<endl;
        else if(inp==2)
            cout<<"you chose option B"<<endl;
        else if(inp==3)
            cout<<"exiting...!!!";
        else
            cout<<"invalid choice, choose again !"<<endl;
    }
    while(inp!=3);

    return 0;
}