#include<iostream>
using namespace std;

int SumDifference(int iNo)
{
        int iDigit=0;
        int iSumE=0;
        int iSumO=0;

        while(iNo!=0)
        {
            iDigit=iNo%10;
            if((iDigit%2)==0)
            {
                iSumE=iSumE+iDigit;
            }
            else{
                iSumO=iSumE+iDigit;
            }
            iNo=iNo/10;
            
        }
        return iSumE-iSumO;
}

int main()
{
    int iValue=0, iRet=0;

    cout<<"Enter number :"<<endl;
    cin>>iValue;

    iRet=SumDifference(iValue);

    cout<<"Diff is : "<<iRet<<endl;
    return 0;
}