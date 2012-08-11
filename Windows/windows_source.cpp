#include <iostream>		//biblioteca standard
#include <time.h>		//includem timpul pentru a putea genera un seed pentru functia rand()
#include <stdlib.h>		//contine functia rand() si srand()
#include <conio.h>
using namespace std;

int main()
{
int i, a[7], aux, k, j;
bool adevar = true;		//declarare variabile
srand ( time(NULL) );
	for (i = 0; i < 6; i++){
		a[i] = rand() % 49 + 1;}	//generarea numerelor


		for (k=0;k<6;k++){
			if ( a[k] == a[k+1] || a[k] == a[k+2] || a[k] == a[k+3] || a[k] == a[k+4] || a[k] == a[k+5]){
				a[k] = rand() % 49 + 1; }
							}

while (adevar){
adevar = false;
	for (j = 0; j < 5; j++){
		if (a[j] > a[j+1]){

			aux = a[j];
			a[j]= a[j+1];
			a[j+1] = aux;
			
			adevar = true;
							}
							}
				}


for  (i = 0; i < 6; i++){
cout <<" "<< a[i] << " ";}		//afisam numerele generate

getch();}

