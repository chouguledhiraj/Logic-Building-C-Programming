//output : accept the number from user and output is additin of this no
//

#include<iostream>
using namespace std;


int Addition(int iNo)
{
    int iSum=0;
    while (iNo>=1)
    {
       iSum=iSum+iNo;
       iSum++;
       
    }
    return iSum;
    

}

int main()
{
   int iValue=0, iRet=0;

   cout<<"Enter number :"<<endl;
   cin>>iValue;

    iRet=Addition(iValue);

    cout<<"Addition is :"<<iRet<<endl;

    return 0;
}