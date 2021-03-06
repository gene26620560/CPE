/*==========================================
UVa10812 - Beat the Spread
============================================
Completion Date: 104/10/21  by Geneyozakura
==========================================*/
#include <iostream>
using namespace std;
int main()
{
//宣告變數 
int iCase;        //儲存資料組數量
int iSum;         //儲存兩者的分數和
int iDifference;  //儲存兩者的分數差
int iHighScore;   //儲存較高的原始分數
int iLowScore;    //儲存較低的原始分數
int i;            //迴圈變數

//輸入資料組數量
cin >> iCase;

for (i=0; i<iCase; i++)
    {
    //輸入資料的分數和及分數差 
    cin >> iSum >> iDifference;
    
    //計算較高及較低的原始分數
    iHighScore = (iSum + iDifference)/2;
    iLowScore = (iSum - iDifference)/2;
    
    //判斷分數和及分數差的總和是否為奇數
    if ((iSum+iDifference)%2 == 1)
        //若為奇數則[較高原始分數及較低原始分數的總和]會不存在(以小數點形式存在)
        cout << "impossible" << endl;
    //判斷分數和是否大於分數差 在已排除兩者和為奇數的情況下皆可成立
    else if (iSum > iDifference)
        cout << iHighScore << " " << iLowScore << endl;
    //其餘情況皆為最大值、最小值不存在
    else
        cout << "impossible" << endl; 
    }
    
return 0;
}