/*==========================================
UVa10931 - Parity
============================================
Completion Date: 104/11/20  by Geneyozakura
==========================================*/
#include <iostream>
using namespace std;
int main()
{
bool bDetectOne;    //偵測序列是否為 1 的旗標 
int iNumber;        //儲存輸入的值 
int iBinary[32];    //儲存輸入數值的二進位
int iCount;         //儲存二進位中 1 的數量 
int i;              //迴圈變數 

while (cin >> iNumber)
    {
    //設定偵測是否為1的初始值 
    bDetectOne = false;

    //將計算1的數量歸零 
	iCount = 0;

    //設定此一陣列的初始值 
	for (i=0; i<32; i++)
    	iBinary[i] = 0;
    
    //若輸入為0則結束程式 
    if (iNumber == 0)
        break;

    //將十進位換算成二進位 
	while (iNumber >= 1) 
	    { 
	    for (i=0; i<32; i++)
    		{
	        iBinary[i] += iNumber%2;
	        //累計1的數量 
	        if (iNumber%2 == 1)
	            iCount++; 
	        iNumber /= 2; 
	        }
        }
    
    //輸出所題目要求的格式 
    cout << "The parity of ";
    //輸出二進位
	for (i=31; i>=0; i--)
    	{
    	//當偵測到1時 輸出其後所需的數值 
    	if (iBinary[i] == 1)
    		bDetectOne = true;
    	if (bDetectOne == true)
    	    cout << iBinary[i];
		}
	cout << " is " << iCount << " (mod 2)." << endl;
    }
    
return 0;
}