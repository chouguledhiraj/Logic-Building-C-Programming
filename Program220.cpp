//claculate the average
#include<iostream>
using namespace std;

float Average(int Arr[], int iSize)
{
    int i=0, iSum=0;
    float fAns=0.0f;

    for(i=0;i<iSize; i++)
    {
        iSum=iSum+Arr[i];
    }
    fAns=(float)iSum/(float)iSize;

    return fAns;
}

int main()
{
    int iLength=0, i=0;
    int *ptr=NULL;
    float fRet=0.0f;

    cout<<"enter number of elements that you want to store :"<<endl;
    cin>>iLength;

    ptr=new int[iLength];
    
    cout<<"enter the element :"<<endl;

    for(i=0; i<iLength; i++)
    {
        cin>>ptr[i];
    }

    fRet=Average(ptr,iLength);

    cout<<"Average is :"<<fRet<<endl;


    delete []ptr;

    return 0;
}