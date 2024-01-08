#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cout<<"Enter Student ID: ";
    cin>>s;
    printf("Generated string:MYIDIS");
    for(int i=5; i<=8; i++)
    {
        if(s[i]=='0')
            cout<<"ZERO";
        if(s[i]=='1')
            cout<<"ONE";
        if(s[i]=='2')
            cout<<"TWO";
        if(s[i]=='3')
            cout<<"THREE";
        if(s[i]=='4')
            cout<<"FOUR";
        if(s[i]=='5')
            cout<<"FIVE";
        if(s[i]=='6')
            cout<<"SIX";
        if(s[i]=='7')
            cout<<"SEVEN";
        if(s[i]=='8')
            cout<<"EIGHT";
        if(s[i]=='9')
            cout<<"NINE";
    }
}
