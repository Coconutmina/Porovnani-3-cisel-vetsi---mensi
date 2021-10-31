//Největší číslo ze tří
#include <stdio.h>

int main()
{
	//čísla dosazená do vzorce
	int a = 5, b = 8, c = 10;
	int max;
	//Postupné vzorce
	//mimochodem tento vzorec jsem si našel na internetu, protože jsem ze začátku nevěděl jak se to dělá tak doufám že to nevadí.
	if (a == b == c) {
		max = a;
	}
	else {
		if ((a > b) && (a > c)) {
			max = a;
		}
		else {
			if ((b > a) && (b > c)) {
				max = b;
			}
			else {
				max = c;
			}
		}
	}
	//Finální věta dosazená do vzorce
	printf("nejvetsí cislo ze vsech je %d", max);
}
