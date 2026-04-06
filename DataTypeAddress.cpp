/////////////////////////////////////////////////////////////////////////////////////////
//
// Required Heder files
//
/////////////////////////////////////////////////////////////////////////////////////////
#include<iostream>
using namespace std;

/////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : DisplayValues
// Description   : it is used display values 
// Input         : Intiger/Character
// Output        : Intiger/Character
// Author        : Pratibha Sagar Pawar 
//        
////////////////////////////////////////////////////////////////////////////////////////////

void DisplayValues()
{
    char cValue = 'A';
    int iValue = 11;
    float fValue = 21.4842f;
    double dValue = 41.4842;

    cout<< cValue<<"\n";
    cout<< iValue<<"\n";
    cout<< fValue<<"\n";
    cout<< dValue<<"\n";

    cout<<"Size of cValue is : "<< sizeof(cValue)<<"\n";
    cout<<"Size of iValue is : "<< sizeof(iValue)<<"\n";
    cout<<"Size of fValue is : "<< sizeof(fValue)<<"\n";
    cout<<"Size of dValue is : "<< sizeof(dValue)<<"\n";

    cout<<"address of cValue is : "<< &cValue <<"\n";
    cout<<"address of iValue is : "<< &iValue <<"\n";
    cout<<"address of fValue is : "<< &fValue <<"\n";
    cout<<"address of dValue is : "<< &dValue <<"\n";

}

///////////////////////////////////////////////////////////////////
//  Entry point function
//////////////////////////////////////////////////////////////////

int main()
{
    DisplayValues();
    return 0;
}

///////////////////////////////////////////////////////////////////////////////
//  End of entry point function
///////////////////////////////////////////////////////////////////////////////