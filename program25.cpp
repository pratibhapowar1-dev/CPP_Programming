// 2    4   6   8   10
#include<iostream>
using namespace std;

void Display(int iNo)
{
    int iCnt = 0;

    for(iCnt = 2; iCnt<= iNo; iCnt++)   
    {
        if(iCnt%2 == 0)
        {
            cout<<iCnt<<"\t";
        }
      
    }
    printf("\n");
}

int main()
{
    int iValue = 0;

    cout<<"Enter the frequancy : ";
    cin>>iValue;

    Display(iValue);

    return 0;

}