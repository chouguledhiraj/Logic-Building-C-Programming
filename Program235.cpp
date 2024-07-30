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

       int SumDigits(int iNo)
       {
             int iSum=0;
             int iDigit=0;
               
            while(iNo !=0)
            {
                iDigit=iNo%10;
                iSum=iSum+iDigit;
                iNo=iNo/10;
            }
            return iSum;
       }

       void DisplayDigitsSum()
       {
        int i=0, iRet=0; 
        
        for(i=0; i<iSize; i++)
        {
            iRet= SumDigits(Arr[i]);
            cout<<"sum of digits of"<<Arr[i]<<"is"<<iRet<<endl;
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

    aobj->DisplayDigitsSum();

    

    delete aobj;

    return 0;
}