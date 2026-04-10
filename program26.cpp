#include<iostream>
using namespace std;

bool CheckDivisible(int iNo1, int iNo2)
{
    if(iNo1%iNo2 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;
    bool bRet = false;

    cout<<"Enter the first number : \n";
    cin>>iValue1;

    cout<<"Enter the second number : \n";
    cin>>iValue2;

    bRet = CheckDivisible(iValue1,iValue2);

    if(bRet==true)
    {
        cout<<"it is a completly divisible number \n ";
    }
    else
    {
        cout<<"it ia not a divisible number\n";
    }

    return 0;

}