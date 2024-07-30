//accept the n number from user and counttheir particular digits

//add average function inside the class

#include<iostream>
using namespace std;

class ArrayX
{
    private:
        int *Arr;  //chractersics
        int iSize;  //chractersics
    
    public:
        ArrayX(int No)
        {
            iSize=No;
            Arr= new int[iSize];
        }


        ~ArrayX()
        {
            delete[]Arr;
        }

        void Accept()       //setter method
        {
            int i=0;
            cout<<"enter the elements :"<<endl;
            for(i=0; i<iSize; i++)
            {
                cin>>Arr[i];
            }
        }

       void CalculateDigits()
       {
        int i=0;
        int iNo=0, iCount=0;
        
        for(i=0; i<iSize; i++)
        {
            iNo=Arr[i];
            while(iNo !=0)
            {
                iCount++;
                iNo=iNo/10;
            }
            cout<<Arr[i]<<"contains"<<iCount<<"Digits in it"<<endl;
            iCount=0;

        }

       }
};

int main()
{
    int iLegth =0;
    float fRet=0;

    cout<<"enter the number of element that you want to store :"<<endl;
    cin>>iLegth;

    //ArrayX aboj(iLength);         static object creation
    ArrayX *aobj=new ArrayX(iLegth);            //Dynamic object creation

    aobj->Accept();

    aobj->CalculateDigits();

    

    delete aobj;

    return 0;
}