/*==========================================
UVa12019 - Doom's Day Algorithm
============================================
Completion Date: 104/11/24  by Geneyozakura
==========================================*/
#include <iostream>
using namespace std;
int main()
{
int iCase;               //�x�s��J���ꪺ�Ӽ� 
int iMonth;              //�x�s��J����� 
int iDay;                //�x�s��J����� 
int i, j;                //�j���ܼ�
int iMonthDay[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
                         //�x�s�U������Ѽ� 
int iDaySum;             //�x�s�Ѽ��`�M 
int iWeek;               //�x�s�P���X 

//��J����Ӽ� 
cin >> iCase;

for (i=0; i<iCase; i++)
    {
    //��J����Τ�� 
    cin >> iMonth >> iDay;
    
    //�N�Ѽ��`�M�k�s 
    iDaySum = 0;
    
    //�N�����J������e���Ҧ�����Ѽƥ[�` 
    for (j=1; j<iMonth; j++)
    	iDaySum += iMonthDay[j];
    
    //�N�W�z�[�`���ѼƦA�[�W��J����� 
    iDaySum += iDay;
    
    //�@�P���C�� �]��mod7�D��J�����������P���X 
    iWeek = iDaySum % 7;
    
    //��X�P���X 
    switch (iWeek)
        {
        case 0:
            cout << "Friday" << endl;
            break;
        case 1:
            cout << "Saturday" << endl;
            break;
        case 2:
            cout << "Sunday" << endl;
            break;
        case 3:
            cout << "Monday" << endl;
            break;
        case 4:
            cout << "Tuesday" << endl;
            break;
        case 5:
            cout << "Wednesday" << endl;
            break;
        case 6:
            cout << "Thursday" << endl;
        }
    }
return 0;
}