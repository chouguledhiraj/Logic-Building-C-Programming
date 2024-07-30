//use strcat 
#include<iostream>
using namespace std;

void strcatX(char *Dest, char *Src)     //src==source   dest= Destination
{
    while(*Dest!='\0')
    {
        Dest++;
    }
    while(*Src != '\0')  
    {       
            *Dest = *Src;  
            Dest++;
            Src++;    
    }

    *Dest = '\0';
}

int main()
{
    char Arr[30];
    char Brr[30]="hello";

    cout<<"enter the source string :"<<endl;
    cin.getline(Arr,30);

    strcatX(Brr,Arr);      

    cout<<"Destination string is :"<<Brr<<endl;

    return 0;
}