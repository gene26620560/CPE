﻿/*==========================================
UVa10055 - Hashmat the Brave Warrior
============================================
Completion Date: 104/09/22   by Geneyozakura
==========================================*/
#include <iostream>
using namespace std;
int main()
{
//宣告變數
long long int lliSoldier;   //儲存 Hashmat Soldier 的兵力
long long int lliOpponent;  //儲存 Opponent Soldier 的兵力
 
//使用迴圈測多組數值
while (cin >>  lliSoldier >> lliOpponent)
    if (lliSoldier > lliOpponent)
        cout << lliSoldier - lliOpponent << endl;
    else
        cout << lliOpponent - lliSoldier << endl;
return 0;
}
