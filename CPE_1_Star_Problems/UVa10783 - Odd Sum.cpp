/*==========================================
UVa10783 - Odd Sum
============================================
Completion Date: 104/10/07  by Geneyozakura
==========================================*/
#include <iostream>
using namespace std;
int main()
{
//宣告變數
int iCase;      //儲存資料組數量 
int iLowerNum;  //儲存資料下限 
int iUpperNum;  //儲存資料上限 
int iOddSum;    //儲存奇數總和 
int i,j;        //迴圈變數   
 
//輸入資料組數量
cin >> iCase;
  
for (i=0; i<iCase; i++)
    {
    //輸入資料下限及上限
    cin >> iLowerNum >> iUpperNum;
    
    //在進入加總前先將奇數總和初始化 
    iOddSum = 0;
    for (j=iLowerNum; j<=iUpperNum; j++)
        //判斷迴圈變數j是否為奇數 若成立則進入下層加總 
        if (j%2 == 1)
            iOddSum = iOddSum + j; 
    //印出奇數總和的值 
    cout << "Case "<< i+1 << ": " << iOddSum << endl;
    }
      
return 0;   
}