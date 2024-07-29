#include<iostream>
using namespace std;

class ArrayX
{
    public:
        int *Arr;
        int iSize;

        ArrayX(int No)
        {
            cout<<"INside Constructor"<<endl;
            iSize=No;
            Arr= new int[iSize];
        }


        ~ArrayX()
        {
            cout<<"inside destructor"<<endl;
            delete[]Arr;
        }
};

int main()
{
    int iLegth =0;

    cout<<"enter the number of element that you want to store :"<<endl;
    cin>>iLegth;

    ArrayX aobj(iLegth);


    return 0;
}