// Addition 
#include<iostream>
using namespace std;

template <class T>
T Addition (T Arr[] ,int iSize)
{
    int iCnt = 0;
    T Sum ;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        Sum = Sum + Arr[iCnt];
    }
    return Sum;
}

int main()
{
    int Data[] = {10,20,30,40};
    int iRet = Addition(Data, 4);

    cout<<"Addition of integers :"<<iRet<<"\n";

    float Dataf[] = {90.2,9.23, 11.2, 12.9, 67.90};
    float fRet = Addition(Dataf, 5);

    cout<<"Addition of floats :"<<fRet<<"\n";
    return 0;
}
