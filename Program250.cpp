#include<iostream>
using namespace std;

void strcpyX(char *Dest, char *Src)     //src==source   dest= Destination
{
    while(*Src !='0')
    {
        *Dest=*Src;

        Src++;
        Dest++;
    }

    *Dest='\0';
}

int main()
{
    char Arr[30];
    char Brr[30];

    cout<<"enter the source string :"<<endl;
    cin.getline(Arr,30);

    strcpyX(Brr,Arr);       //strcpyX(200,100);

    cout<<"Copied string is :"<<Brr<<endl;

    return 0;
}