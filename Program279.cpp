//output:  5   4   3   2   1
#include<iostream>
using namespace std;

//Approach 3: using recursion
void Display(int iNo)
{
    int i=iNo;
    while (i>=1)
    {
     cout<<i<<endl;
     i--;
    }


}

int main()
{
   int iValue=0;

   cout<<"Enter number :"<<endl;
   cin>>iValue;

    Display(iValue);

    cout<<"End of application "<<endl;

    return 0;
}