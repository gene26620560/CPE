/*==========================================
UVa11417 - GCD
============================================
Completion Date: 105/01/26  by Geneyozakura
==========================================*/
#include <iostream>
using namespace std;
 
//副程式:使用輾轉相除法求最大公因數
//輸入:兩個正整數Num1, Num2
//輸出:Num1和Num2之最大公因數
int GCD (int Num1, int Num2)
{
while (1)
    {
    if (Num1 > Num2)
        swap (Num1, Num2);
 
    Num2 %= Num1;
    if (Num2 == 0)
        return Num1;
    }
}

//主程式
int main()
{
int iInput;     //儲存輸入的數
int iGCDSum;    //儲存GCD的總和
int i;          //迴圈變數
int j;          //迴圈變數
 
while (cin >> iInput)
    {
    //初始化
    iGCDSum = 0;
 
    //若輸入為0則結束程式
    if (iInput == 0)
        break;
 
    //依題意計算GCD的總和
    for (i=1; i<iInput; i++)
        for (j=i+1; j<=iInput; j++)
            iGCDSum += GCD (i, j);
 
    //輸出
    cout << iGCDSum << endl;
    }
 
return 0;
}