//add average function inside the class

#include<iostream>
using namespace std;

class ArrayX
{
    private:
        int *Arr;
        int iSize;
    
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

        void Display()      //getter method
        {
            int i=0;
            cout<<"elements are :"<<endl;
            for(i=0; i<iSize; i++)
            {
                cout<<Arr[i]<<endl;
            }
        }



       float Average()
       {
        int i=0, iSum=0;
        float fAns=0;

         for(i=0;i<iSize; i++)
        {
        iSum=iSum+Arr[i];
        }
        fAns=(float)iSum/(float)iSize;

        return fAns;
        }
       
};

int main()
{
    int iLegth =0;
    float fRet=0;

    cout<<"enter the number of element that you want to store :"<<endl;
    cin>>iLegth;

    ArrayX aobj(iLegth);

    aobj.Accept();
    aobj.Display();

    fRet=aobj.Average();

    cout<<"Average is :"<<fRet<<endl;

    return 0;
}