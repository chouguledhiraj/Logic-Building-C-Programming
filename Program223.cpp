#include<iostream>
using namespace std;

class ArrayX
{
    public:
        int *Arr;
        int iSize;

        ArrayX(int No)
        {
            cout<<"Inside Constructor"<<endl;
            iSize=No;
            Arr= new int[iSize];
        }


        ~ArrayX()
        {
            cout<<"inside destructor"<<endl;
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
};

int main()
{
    int iLegth =0;

    cout<<"enter the number of element that you want to store :"<<endl;
    cin>>iLegth;

    ArrayX aobj(iLegth);

    aobj.Accept();
    aobj.Display();


    return 0;
}