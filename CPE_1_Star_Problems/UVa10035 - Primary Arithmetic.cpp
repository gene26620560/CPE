/*==========================================
UVa10035 - Primary Arithmetic
============================================
Completion Date: 104/12/01	by Geneyozakura
==========================================*/
#include <iostream>
using namespace std;
int main()
{
unsigned int uiNumber1;    //儲存Number1的值 
unsigned int uiNumber2;    //儲存Number2的值 
int iTempNum1[10];         //儲存Number1每位數的數字
int iTempNum2[10];         //儲存Number2每位數的數字
int iDigit;                //儲存幾位數 
int i;                     //迴圈變數 
unsigned int uiNumber;     //暫存Number1的值
int iFrequency;            //儲存進位次數 

while (cin >> uiNumber1 >> uiNumber2)
	{
	//位數歸零
	iDigit = 0;  
	//進位次數歸零
	iFrequency = 0;
	
	//輸入0,0 結束程式 
	if (uiNumber1 == 0 && uiNumber2 == 0)
		break;
	
	//因為下列計算均是用Number1做運算
	//所以將位數較大的值傳值給Number1 
	if (uiNumber1 < uiNumber2)
		swap (uiNumber1,uiNumber2);
	
	//將Number1暫存給Number作運算 
	uiNumber = uiNumber1;
	//計算輸入值最大位數 
	do 
		{ 
		uiNumber = uiNumber / 10;
		iDigit++;
		} while (uiNumber != 0);
	
	//將每位數的值分別傳入TempNum陣列 
	for (i=0; i<iDigit; i++)
		{
		iTempNum1[i] = uiNumber1 % 10;
		iTempNum2[i] = uiNumber2 % 10;
		
		uiNumber1 /= 10;
		uiNumber2 /= 10;
		}
	
	//若每位數相加大於等於10則進位 (進位次數加一) 
	for (i=0; i<iDigit; i++)
		{
		if ((iTempNum1[i] + iTempNum2[i]) >= 10)
			{
			iFrequency++;
			iTempNum1[i+1]++;
			//若進位後又遇上進位則再一次進位 
			if (iTempNum1[i+2] == 10)
				iTempNum1[i+2]++;
			}
		}
		
	//輸出 
	if (iFrequency == 0)
		cout << "No carry operation." << endl;
	else if (iFrequency == 1)
		cout << iFrequency << " carry operation."<< endl;
	else 
		cout << iFrequency << " carry operations."<< endl;
	}
return 0;
}