#include <math.h>
#include <float.h> 
#include <typeinfo.h> 
#include <windows.h>
#include <iostream>
#include <conio.h>
#include <iomanip>  
#include "TVector.h"
#include "Size.h" 

using namespace std;

int main(){
	SetConsoleOutputCP(1251);
	cout << setprecision(16); 
	int sizea, sizeb, sizex;
	int t = 0; 
	int ans, ESC = 27;
#ifdef _DEBUG
	cout << "================= Работает режим DEBUG ==============" << endl;
#endif
	do{
		cout << "\n================= test #" << ++t << " =================" << endl;
		cout << " \t   Вычисляем вариант №40:" << endl;

		cout << " =====================================" << endl;
		cout << "=     {  a / b + 1,      если a > b   =" << endl;
		cout << "= X = {  -100,           если a = b   =" << endl;
		cout << "=     {  a * b - 9) / a, если a < b   =" << endl;
		cout << " =====================================" << endl << endl;

		Size(sizea, "A");
		Size(sizeb, "B");
		Size(sizex, "X");

		ans = Show(sizea, sizeb, sizex);
	}
	while (ans != ESC);
	return 0;
}