//find capital letter on source string and print it into destiation string without any special character or spaces

#include<iostream>
using namespace std;

void strcpyCapitalX(char *Dest, char *Src)     //src==source   dest= Destination
{
    while(*Src != '\0')  
    {
        if(*Src >= 'A' && *Src <= 'Z') 
        {
            *Dest = *Src;  
            Dest++;
        }
        Src++;
    }

    *Dest = '\0';
}

int main()
{
    char Arr[30];
    char Brr[30];

    cout<<"enter the source string :"<<endl;
    cin.getline(Arr,30);

    strcpyCapitalX(Brr,Arr);       //strcpyX(200,100);

    cout<<"Copied string is :"<<Brr<<endl;

    return 0;
}