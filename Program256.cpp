//compaire two string and print if both string are identical or different 

#include<iostream>
#include<string.h>

using namespace std;

bool strcmpX(char *first, char *second)
{

    
    while((*first !='\0')&&(*second !='\0'))
    {
        if (*first !=*second)
        {
          
            break;

        }
        first++;
        second++;
    }
    if(*first=='\0' && *second=='\0')
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    char Arr[30];
    char Brr[30];
    bool bRet=false;


    cout<<"Enter the first string :"<<endl;
    cin.getline(Arr,30);

    cout<<"Enter the second string :"<<endl;
    cin.getline(Brr,30);

    bRet=strcmpX(Brr,Arr);

    if(bRet==true)
    {
        cout<<"String is identical"<<endl;
    }
    else
    {
        cout<<"String are different"<<endl;
    }


    return 0;
}