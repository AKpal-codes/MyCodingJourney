//Check login attempt with password retry.

#include<iostream>
#include<string>
using namespace std;

int main(){
    string username="AKpal", password="CodingPractice", UserInp, UserPass;
    int retry=3;
    do{
        cout<<"enter username : ";
        cin>>UserInp;

        cout<<"enter password : ";
        cin>>UserPass;

        if(UserInp != username || UserPass != password){
            cout<<"wrong username or password! try again. \n remaining retries : "<<--retry<<endl;
            continue;
        }
        else{
            cout<<"Login successful !!";
            break;
        }
    }
    while(retry!=0);

    return 0;

}