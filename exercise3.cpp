#include <iostream>
#include<string>
using namespace std;

int main()
{
string gender;
int age;
string partner;
string personality;

cout<<"Are you a man or a woman?"<<endl;
cin>>gender;
cout<<"How old are you?"<<endl;
cin>>age;

cout<<"Describe your personality in one word:"<<endl;
cin>>personality;

    if(gender=="man"&&age>=21&&age<=35&&personality=="kind"){
            cout<<"congratulations, you got yourself a suitable partner";}

    else if(gender=="woman"&&age>=20&& age<=35&&personality=="kind"){
        cout<<"congratulations,you got yourself a suitable partner";}
        else{
            cout<<"sorry,there is no partner suitable for you";
        }


    return 0;
}