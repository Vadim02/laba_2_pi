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
	do{
		cout << "\n================= test #" << ++t << " =================" << endl;
		cout << " \t   Âû÷èñëÿåì âàðèàíò ¹40:" << endl;

		cout << " =====================================" << endl;
		cout << "=     {  a / b + 1,      åñëè a > b   =" << endl;
		cout << "= X = {  -100,           åñëè a = b   =" << endl;
		cout << "=     {  a * b - 9) / a, åñëè a < b   =" << endl;
		cout << " =====================================" << endl << endl;

		Size(sizea, "A");
		Size(sizeb, "B");
		Size(sizex, "X");

		ans = Show(sizea, sizeb, sizex);
	}
	while (ans != ESC);
	return 0;
}
