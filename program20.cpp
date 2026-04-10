#include<iostream>
using namespace std;

void Display(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt<= iNo; iCnt++)
    {
        cout<<iCnt <<"\t"<<"*\t";
    }
  
    cout<<"\n";
}
int main()
{
    int iValue = 0;

    printf("Enter the frequancy : \n");
    scanf("%d",&iValue);
    
    Display(iValue);

    return 0;
}