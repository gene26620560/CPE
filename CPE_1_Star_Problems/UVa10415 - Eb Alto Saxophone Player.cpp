﻿/*==========================================
UVa10415 - Eb Alto Saxophone Player
============================================
Completion Date: 105/03/15   by Geneyozakura
==========================================*/
#include <iostream>
#include <string>
using namespace std;
int main()
{
int iCase;				//儲存測資個數 
string sSong;				//儲存輸入的曲子字串 
int iSongLength;			//儲存輸入樂譜字串的長度 
int iPressCount[10];			//儲存按鍵按下的次數 
int i;					//迴圈變數 
int j;					//迴圈變數
int k;					//迴圈變數
char cFingerPress[10];			//儲存按鍵當下的情況 (0:未壓,1:已壓)

char cNote[14] = {'c','d','e','f','g','a','b',
		  'C','D','E','F','G','A','B'};
		//儲存個音符符號
							   
char cFingering[14][11] = {"0111001111",  //c
			   "0111001110",
			   "0111001100",
			   "0111001000",
			   "0111000000",
			   "0110000000",
			   "0100000000",
			   "0010000000",  //C
			   "1111001110",
			   "1111001100",
			   "1111001000",
			   "1111000000",
			   "1110000000",
			   "1100000000"};
			   //儲存各音符的按鍵指法 (0:不按,1:應按)

//輸入測資個數 
cin >> iCase;
while (iCase--)
	{
	//初始化 
	for (i=0; i<10; i++)
		{
		iPressCount[i] = 0;
		cFingerPress[i] = '0';
		}
	
	//輸入樂曲字串 並取得其長度 
	cin >> sSong;
	iSongLength = sSong.length();
	
	//逐一檢查樂曲字串 
	for (i=0; i<iSongLength; i++)
		//比對音符符號 
		for (j=0; j<14; j++)
			if (sSong[i] == cNote[j])
				//依照各音符的按鍵指法進行運算 
				for (k=0; k<10; k++)
					{
					//指法為0 若按鍵當下情況為1則還原0  
					if (cFingering[j][k] == '0')
						if (cFingerPress[k] == '1')
							{
							cFingerPress[k] = '0';
							continue;
							}
							
					//指法為1 若按鍵當下情況為1則跳過
					//反之    若按鍵當下情況為0則該鍵按壓次數+1 並更新按鍵當下情況為1 
					if (cFingering[j][k] == '1')
						{
						if (cFingerPress[k] == '1')
							continue;
						else
							{
							iPressCount[k]++;
							cFingerPress[k] = '1';
							}
						}
					
					}					
						
	//輸出 
	for (i=0; i<10; i++)
		if (i == 9)
			cout << iPressCount[i] << endl;
		else
			cout << iPressCount[i] << " ";
	}

return 0;
}
