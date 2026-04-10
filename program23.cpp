// 2 4 6 8 10
#include<iostream>
using namespace std;

void Display(int iNo)
{
    int iCnt = 0;

    for(iCnt = 2; iCnt<=iNo; iCnt=iCnt+2)
    {
        cout<<iCnt<<"\t";

    }
    cout<<"\n";
}

int main()
{
    int iValue = 0;

    printf("Please enter frequancy : ");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}