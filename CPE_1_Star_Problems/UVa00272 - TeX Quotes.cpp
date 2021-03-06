﻿/*==========================================
UVa00272 - TeX Quotes
============================================
Completion Date: 104/12/17  by Geneyozakura
==========================================*/
#include <iostream>
#include <string>
using namespace std;
int main()
{
string sInput;       //儲存輸入的字串 
int iInputLength;    //儲存數入字串的長度 
int i;               //迴圈變數 
bool bLeftQuote;     //判斷左引號的旗標 
 
//設定左引號的旗標 
bLeftQuote = false;
 
while (getline (cin, sInput))
    {
    //得出輸入字串的長度 
    iInputLength = sInput.length();
     
    //替換引號 
    for (i=0; i<iInputLength; i++)
        {
        if (sInput[i] == '"')
            {
            //當替換左引號(旗標轉為true)後才替換右引號 
            if (bLeftQuote)
                cout << "\''";
            else
                cout << "\``";
            //將旗標做反運算 
            bLeftQuote = !bLeftQuote;
            }
         
        //若不為引號 則正常輸出 
        else
            cout << sInput[i];
        }
    cout << endl;
    }
return 0;
}
