
#include<iostream>
using namespace std;

int main()
{
    int iLength=0, i=0;
    int *ptr=NULL;

    cout<<"enter number of elements that you want to store :"<<endl;
    cin>>iLength;

    ptr=new int[iLength];
    
    //logic


    delete []ptr;

    return 0;
}