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

        void Accept()
        {
            int i=0;
            cout<<"enter the elements :"<<endl;
            for(i=0; i<iSize; i++)
            {
                cin>>Arr[i];
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
    return 0;
}