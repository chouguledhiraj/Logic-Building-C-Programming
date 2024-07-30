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

       int CalculateDigits(int iNo)
       {
             int iCount=0;
               
            while(iNo !=0)
            {
                iCount++;
                iNo=iNo/10;
            }
            return iCount;
       }

       void DisplayDigitsCOunt()
       {
        int i=0, iRet=0; 
        
        for(i=0; i<iSize; i++)
        {
            iRet= CalculateDigits(Arr[i]);
            cout<<Arr[i]<<"conatis"<<iRet<<"Digits in it"<<endl;
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

    aobj->DisplayDigitsCOunt();

    

    delete aobj;

    return 0;
}