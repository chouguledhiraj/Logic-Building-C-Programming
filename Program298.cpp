//find the number of digit
#include<iostream>
using namespace std;


int SumFactor(int iNo)
{
  static  int i=1;
  static int iSum=0;

    if( i<=(iNo/2))
    {
        if((iNo%i)==0)
        {
        
        iSum=iSum+i;
            
        }
      i++;  
      SumFactor(iNo);    
    }
    return iSum;
    
}


int main()
{
    int iValue=0, iRet=0;

    cout<<"Enter number :"<<endl;
    cin>>iValue;

    iRet=SumFactor(iValue);

    cout<<"Addition is"<<iRet<<endl;
  
    return 0;
}

