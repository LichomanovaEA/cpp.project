#include <stdio.h> 
#include <conio.h> 
#include "Header.h"
#include <iostream>

using namespace std;
using std::endl;

int main(void)
{

	printf_s("---------------------------------------------------------------------------------\n");
	printf_s("\n");
	printf_s("Sozdat' class, opredelyayuwii odnomernii massiv i soderzawii funkciyu,\n");
	printf_s("osuwestvlyayuwuyu poisk maksimal'nogo elemente v etom massive. \n");
	printf_s("Opredelit' minimal'nii iz maksimal'nih elementov stolbcov dvumernoi matrici.\n");
	printf_s("Sozdat' class-naslednik, dopolniv ego funkciey sortirovki massiva po\n");
	printf_s("vosrastaniyu kolichestva deliteley elementov. Opredelit' chislo strok\n");
	printf_s("matrici, uporyadochennih po ubivaniyu kolichestva deliteley.\n");
	printf_s("---------------------------------------------------------------------------------\n");
//--------------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------------
	int el, size;
	cout << "Enter size:" << endl;
	cin >> size;
	int* arr = new int[size];
	cout << "Enter numeric array elements. Required elements count is:" << size << endl;
	for (int i = 0; i<size; i++)
	{
		cin >> el;
		arr[i] = el;
	}

	Range r(size, arr);
	r.print();
	return 0;

//-------------------------------------------------------------------------------------------------------— 

//-------------------------------------------------------------------------------------------------------— 
	//printf_s("%d", min);
	_getch();
}