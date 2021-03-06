﻿/*==========================================
UVa00100 - The 3n + 1 problem
============================================
Completion Date: 104/11/18   by Geneyozakura
==========================================*/
#include <iostream>
using namespace std;
int main()
{
int iRangeBegin;        //儲存輸入的範圍 
int iRangeEnd;          //儲存輸入的範圍 
int iUpperNum;          //儲存範圍的上限 
int iLowerNum;          //儲存範圍的下限 
int i;                  //迴圈變數 
int iTemp;              //儲存3n+1時使用的暫存變數 
int iCycleLength;       //儲存循環長度 
int iMaxCycleLength;    //儲存最大的循環長度 


while (cin >> iRangeBegin >> iRangeEnd)
    {
    //判斷輸入數值的上限與下限 
    if (iRangeBegin < iRangeEnd)
        {
        iLowerNum = iRangeBegin;
        iUpperNum = iRangeEnd;
        }
    else
        {
        iLowerNum = iRangeEnd;
        iUpperNum = iRangeBegin;
        }
    //將最大循環長度預設為1	
    iMaxCycleLength = 1;
    
    //開始從下限值開始執行 直到上限值停止 
    for (i=iLowerNum; i<=iUpperNum; i++)
        {
        //將循環長度預設為1 
        iCycleLength = 1;
 
        //將i設定給iTemp做3n+1的運算 
        iTemp = i;
		
        //做3n+1運算 直到結果為1為止
        //同時每執行一次運算 循環長度+1
        while (iTemp != 1)
            {
            if (iTemp%2 == 1)
                {
                iTemp = 3*iTemp + 1;
                iCycleLength++;
                }
            if (iTemp%2 == 0)
                {
                iTemp = iTemp/2;
                iCycleLength++;
                }
            }
		
        //更新最大循環長度 
        if (iCycleLength > iMaxCycleLength)
            iMaxCycleLength = iCycleLength;
        }

    cout << iRangeBegin << " " << iRangeEnd << " " << iMaxCycleLength << endl;
    }

return 0;
}
