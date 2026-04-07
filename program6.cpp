#include<iostream>
using namespace std;

int AdditionTwoNumber(int iNo1, int iNo2)
{
    int iSum = 0;
    iSum = iNo1+iNo2;
    return iSum;
}

int main()
{
    int iValue1 = 0, iValue2 = 0, iRet = 0;

    cout<<"Enter first number : \n";
    cin>>iValue1;

    cout<<"Enter second number : \n";
    cin>>iValue2;

    iRet = AdditionTwoNumber(iValue1,iValue2);

    cout<<"Addition is :"<<iRet;

    return 0;
}