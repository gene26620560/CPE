﻿/*==========================================
UVa10222 - Decode the Mad man
============================================
Completion Date: 104/12/15   by Geneyozakura
==========================================*/
#include <iostream>
#include <string>
using namespace std;
int main()
{
//儲存鍵盤上的按鍵 
char cKeyboardButton[45] = {'1', '2', '3', '4', '5', '6', '7', '8', '9', '0', '-', '=',
			     'q', 'w', 'e', 'r', 't', 'y', 'u', 'i', 'o', 'p', '[', ']',
			      'a', 's', 'd', 'f', 'g', 'h', 'j', 'k', 'l', '\;', '\'',
			       'z', 'x', 'c', 'v', 'b', 'n', 'm', ',', '.', '/'};
string sInput;		//儲存輸入需解碼的字串 
int i;			//迴圈變數 
int j;			//迴圈變數 
int iInputLength;	//儲存輸入的字串長度 
	
while (getline (cin, sInput))
	{
	//得出輸入的字串長度 
	iInputLength = sInput.length();
	
	//判斷其輸入的是否為英文字母大寫 若是大寫則將其轉為小寫 
	for (i=0; i<iInputLength; i++)
		if ((sInput[i] >= 65 ) && (sInput[i] <= 90 ))
			sInput[i] += 32;
	
	//解碼 
	for (i=0; i<iInputLength; i++)
		{
		//若字串內有空格則直接印出空格 
		if (sInput[i] == ' ')
			cout << " ";
		//若字串內有相對應的鍵盤按鍵 則輸出其鍵盤上左邊二格的按鍵 
		for (j=0; j<45; j++)
			if (sInput[i] == cKeyboardButton[j])
				cout << cKeyboardButton[j-2];
		}
	cout << endl;
	}		
return 0;
}

