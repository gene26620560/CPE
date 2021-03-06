/*==========================================
UVa10190 - Divide, But Not Quite Conquer!
============================================
Completion Date: 104/11/03  by Geneyozakura
==========================================*/
#include <iostream>
using namespace std;
int main()
{
int iN;         //儲存被除數 
int iM;         //儲存除數 
int iS[100];    //儲存連除結果
int iLength;    //儲存數列長度 
int i;          //迴圈變數 

//輸入多組測資 
while (cin >> iN >> iM)
    {
    //把iN先存入iS[1]的位置 
    iS[1] = iN;
    //將長度設置為1 
    iLength = 1;
    
    //排除除數為1的數
    if (iM == 1)
        {
        cout << "Boring!" << endl;
        continue;
        }
    
    while (iS[iLength] != 1)
    	{
    	//排除後續連除無法被整除的數 
    	if (iS[iLength] % iM != 0)
    	    {
    	    cout << "Boring!" << endl;
    	    break;
    	    }
    	iS[iLength+1] = iS[iLength] / iM;
    	iLength++;
    	}
    
    //當排除無法被整除的數後 重新開始輸入測資 
    if (iS[iLength] % iM != 0 && iS[iLength] != 1) 
        continue;
    
	//輸出首數 
	cout << iS[1];
	//輸出之後連除結果的數 
    for (i=2; i<=iLength; i++)
        cout << " " << iS[i];
    cout << endl;
    }
	
return 0;
}