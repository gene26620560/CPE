﻿/*==========================================
UVa10252 - Common Permutation
============================================
Completion Date: 104/12/16   by Geneyozakura
==========================================*/
#include <iostream>
#include <string>
using namespace std;
int main()
{
string sFirstCase;		//儲存第一筆輸入資料 
string sSecondCase;		//儲存第二筆輸入資料 
int iFirstCaseLength;		//儲存第一筆資料的字串長度 
int iSecondCaseLength;		//儲存第一筆資料的字串長度  
int i;				//迴圈變數 
int j;				//迴圈變數 
int iSame[26];			//儲存相同英文字母的數量 
 
      
while (cin >> sFirstCase >> sSecondCase)
    {
    //得出輸入資料的字串長度 
    iFirstCaseLength = sFirstCase.length();
    iSecondCaseLength = sSecondCase.length();
    
    //將較長的字串作為迴圈的範圍標準 (存入iFirstCaseLength) 
    if (iSecondCaseLength > iFirstCaseLength)
        iFirstCaseLength = iSecondCaseLength;
    
    //將統計相同英文字母的範圍歸零 
    for (i=0; i<=25; i++)
    	iSame[i] = 0;
     
    //逐一比對相同的英文字母 
    for (i=0; i<iFirstCaseLength; i++)
        for (j=0; j<iFirstCaseLength; j++)
            if (sFirstCase[i] == sSecondCase[j])
                {
                //若兩筆資料的字母相同 增加其對應陣列的次數 
                iSame[ (int)sFirstCase[i]-97 ]++;
                //將已經比對過的字母轉為任一字元 避免重複判斷 
                sFirstCase[i] = '!';
                sSecondCase[j] = '!';
                }
                
    //輸出 
    for (i=0; i<=25; i++)
	    for (j=0; j<iSame[i]; j++)
	    	cout << (char)(i+97);  	
    cout << endl; 
    }
return 0;
}
