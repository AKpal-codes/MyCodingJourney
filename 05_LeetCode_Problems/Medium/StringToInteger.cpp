#include<iostream>
using namespace std;
#include<climits>

int myAtoi(string s) {
        int i=0,lead=0,sign=0,pos=0;
        long actual=0;
        while(s[i]!='\0')
        {
            cout<<"entering character : "<<s[i]<<endl;
            if(s[i]==' ' && lead == 0)
            {
                cout<<"leading space detected "<<endl;
                i++;
                continue;
            }
            else if(s[i]=='-')
            {
                cout<<"minus detected"<<endl;
                if(pos==0)
                    {cout<<"entered minus if"<<endl;
                    sign=1;
                    pos=1;
                    lead=1;}
                else
                    break;
            }
            else if(s[i]=='+')
            {
                if(pos==0){
                    pos=1;
                    lead=1;
                }
                else
                    break;
            }
            else if(s[i]>='0' && s[i]<='9')
            {
                cout<<"detected numbers"<<endl;
                lead=1;
                pos=1;
                actual = (actual*10) + s[i] - '0';
                cout<<"actual calculated : "<<actual<<endl;
                if(actual>INT_MAX)
                    break;
            }
            else
                break;
            i++;
        }
        if(sign==1)
            {cout<<"negative number captured"<<endl;
            actual=0-actual;}

        if(actual>INT_MAX)
            actual=INT_MAX;
        else if(actual<INT_MIN)
            actual = INT_MIN;

        return actual;    
    }

    int main()
    {
        cout<<myAtoi("  +042")<<endl;
    }