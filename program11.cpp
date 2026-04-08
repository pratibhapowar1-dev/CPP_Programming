#include<iostream>
using namespace std;

bool CheckEvenOdd(int iNo)
{
   return((iNo % 2 )== 0);
    
}

int main()
{
    int iValue = 0;
    bool bRet = false;

    cout<<"Enter the number : \n";
    cin>>iValue;

    bRet = CheckEvenOdd(iValue);

    if(bRet == true)
    {
        cout<<iValue<<" is a even number\n";
    }
    else
    {
        cout<<iValue<<" is a odd number\n";
    }

    return 0;
}