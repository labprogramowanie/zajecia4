
#include <stdio.h>
#include <string.h>
#include <malloc.h>

struct Student
{
	char* imie;
	char* nazwisko;
	int wiek;
	int nrIndeksu;
};

struct Tablica
{
	int aktualny;
	struct Student studenci[20];
	{

	}tablica;

};

void DodajStudenta(char* i, char* n, int w, int nr) {
	if (tablica.aktualny<20) {
		tablica.studenci[tablica.aktualny].imie = malloc(strlen(i) + 1);
		strcpy(tablica.studenci[tablica.aktualny].imie, i);

		tablica.studenci[tablica.aktualny].nazwisko = malloc(strlen(i) + 1);
		strcpy(tablica.studenci[tablica.aktualny].imie, i);

		tablica.studenci[tablica.aktualny].wiek = w;

		tablica.studenci[tablica.aktualny].nrIndeksu = nr;

		tablica.aktualny++;
	}

}

void WypiszDane() {



	for (int q = 0; q < tablica.aktualny; tablica.aktualny++) {
		printf("%s\t", tablica.studenci[tablica.aktualny].imie);
		printf("%s\t", tablica.studenci[tablica.aktualny].nazwisko);
		printf("%d\t", tablica.studenci[tablica.aktualny].wiek);
		printf("%d\t", tablica.studenci[tablica.aktualny].nazwisko);
	}


}

int UsunPoNazwisku(char* naz) {
	int q = 0;

	while (tablica.aktualny) {
	
		if (strcmp(tablica.studenci[tablica.aktualny].nazwisko[q], naz) == 0) { // 0 gdy s1==s2 
			free(tablica.studenci[tablica.aktualny].imie);
			free(tablica.studenci[tablica.aktualny].nazwisko);

			return tablica.aktualny;

		}
		tablica.aktualny++;
	}
	return -1;
}

void main() {
	char i, n, nazwisko;
	int w, nr;

	DodajStudenta(i, n, w, nr);
	WypiszDane();
	UsunPoNazwisku(nazwisko);
	
}