/*==========================================
UVa11150 - Cola
============================================
Completion Date: 104/10/28  by Geneyozakura
==========================================*/
#include <iostream>
using namespace std;
int main()
{
int iCola;          //儲存購買的可樂數量 
int iEmptyBottle;   //儲存喝完的可樂數量 
int iColaSum;       //儲存總共喝到的可樂數量 
 
while (cin >> iCola)
    {
    //將購買的可樂數量儲存在喝完的可樂數量 
    iEmptyBottle = iCola;
    //將購買的可樂數量儲存在總共喝到的可樂數量 
    iColaSum = iCola;
     
    //當喝完三瓶可再換一瓶 直到空瓶小於三瓶為止 
    while (iEmptyBottle >= 3)
        {
        //活動三換一可以再獲得可樂的瓶數
        iCola = iEmptyBottle / 3;
        
        //此時所喝到的可樂數量(購買的可樂數量+換到的可樂數量) 
        iColaSum = iColaSum + iCola;
        
        //換完再喝光的數量+原本就剩餘的數量
        //目前可樂空瓶數量用來判斷while是否繼續 
        iEmptyBottle = iCola + iEmptyBottle%3;
        }
     
    //若剩餘2個空瓶時 自動補上1空瓶湊三換一
    if (iEmptyBottle == 2)
        iColaSum ++;
     
    cout << iColaSum << endl; 
    }

return 0;
}