#include <iostream>
#include <cmath>
#include <math.h>
using namespace std;


int main()
{
	int i = 1;
	int i2 = 1;
	while (i==1) {

		 
		int vybor = 0;

		cout << "Viberite programmu (0 = zakonchit; 1 = kalkulyator; 2 = laboratornaya rabota 1 (reshenya)) \n";
		cin >> vybor;

		if (vybor == 1)
		{
			float num1 = 0;
			float num2 = 0;
			float num3 = 0;
			char znack = '+';


			cout << "pleas include 'a'\n";
			cin >> num1;
			cout << "pleas include 'b'\n";
			cin >> num2;
			cout << "pleas include znack (+,-,*,/) \n";
			cin >> znack;

			switch (znack)
			{
			case '+': cout << "result= " << num1 + num2 << endl;
				break;
			case '-': cout << "result= " << num1 - num2 << endl;
				break;
			case '/': cout << "result= " << num1 / num2 << endl;
				break;
			case '*': cout << "result= " << num1 * num2 << endl;
				break;
			default: cout << "the value is entered incorrectly, check the correctness of the input \n";
			}
		}

		else if (vybor == 2)
		{

			cout << "lab rab, vopr 1\n";
			
			double s1;
			double pX1 = 14.26; 
			double  pY1 = -1.22; 
			double pZ1 = 3.5 * pow(10,-2);
			
			s1 = 0.369335+(2* cos(pX1 - (2 / 3))) / ((1 / 2) + (sin(2*pY1))) * (1 + (pow(pZ1, 2)) / (3 - pow(pZ1, 2) / 5));

			cout << s1 << endl ;


			cout << "lab rab, vopr 2\n";

			double s2;
			double pX2 = -4.5;
			double  pY2 = 0.75*pow(10,-4);
			double pZ2 = -0.845 * pow(10, 2);

			s2 = (3 * sqrt(9 + (pow(pX2 - pY2, 2)))) / (pow(pX2 + pY2, 2)) + 127.04412 - (exp(fabs(pX2 - pY2))) * (tan(3 * pZ2));

			cout << s2 << endl;
		}
		
		cout << "Dlya povtora programmy vvedyte '1', dlya zavershenya vvedyte luboy simvol\n";
		cin >> i2;
		if (i2 == 1) { i = 1; }
		else { i = 0; }
	}
}
