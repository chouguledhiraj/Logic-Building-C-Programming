//find the number of digit
#include<iostream>
using namespace std;


void DisplayFactor(int iNo)
{
  static  int i=1;

    if( i<=(iNo/2))
    {
        if((iNo%i)==0)
        {
            cout<<i<<endl;
            
        }
      i++;  
      DisplayFactor(iNo);    
    }
    
}


int main()
{
    int iValue=0, iRet=0;

    cout<<"Enter number :"<<endl;
    cin>>iValue;

    DisplayFactor(iValue);
  
    return 0;
}