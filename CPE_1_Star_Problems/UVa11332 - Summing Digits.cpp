/*==========================================
UVa11332 - Summing Digits
============================================
Completion Date: 104/12/22  by Geneyozakura
==========================================*/
#include <iostream>
#include <string>
using namespace std;
int main()
{
string sInput;      //儲存輸入的字串 
int iInputLength;   //儲存輸入字串的長度 
int iSum;           //儲存各數字相加之總和 
int i;              //迴圈變數 
int iTemp;          //暫存變數 

while (cin >> sInput)
    {
    //輸入0則結束程式 
    if (sInput[0] == '0')
        break;
     
    //將總和歸零 
    iSum = 0;
    //得出輸入字串的長度 
    iInputLength = sInput.length();
     
    //將各數字相加 (因為輸入數字為字元所以需要-48) 
    for (i=0; i<iInputLength; i++)
        iSum += (sInput[i]-48);
     
    //若上式相加完仍是兩位數以上 則持續將各數字相加 
    while (iSum >= 10)
        {
        iTemp = iSum;
        iSum = 0;
        //各數字相加 直到剩下個位數為止 
        while (iTemp != 0)
            {
            iSum += iTemp%10;
            iTemp /= 10;
            }
        }
    cout << iSum << endl;
    }
 
return 0;
}