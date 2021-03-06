/*==========================================
UVa11461 - Square Numbers
============================================
Completion Date: 104/11/17  by Geneyozakura
==========================================*/
#include <iostream>
using namespace std;
int main()
{
bool bSquareNum[100001]; //儲存判斷平方的標準 
int iLowerNum;           //儲存下限的數值 
int iUpperNum;           //儲存上限的數值 
int i;                   //迴圈變數  
int iSquareCount;        //儲存開根號為整數的數量 

//設定1~100000的值為false 
for (i=1; i<=100000; i++)
    bSquareNum[i] = false;

//設定1~100000中的平方數為true 
for (i=1; i<317; i++)
    bSquareNum[i*i] = true;

//輸入範圍的下限值及上限值 
while (cin >> iLowerNum >> iUpperNum)
    {
    //將平方數的數量歸零
    iSquareCount = 0;
    
    //若dLowerNum,dUpperNum輸入為0,0則結束程式 
    if (iLowerNum == 0 && iUpperNum == 0)
		return 0;	
    
    //若輸入範圍中有平方數 則數量+1
    for (i=iLowerNum; i<=iUpperNum; i++)
        if (bSquareNum[i])
            iSquareCount ++;
            
	cout << iSquareCount << endl;
	}
	
return 0;
}