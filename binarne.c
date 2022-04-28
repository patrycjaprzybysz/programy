#include <stdio.h>
#include <stdlib.h>

void bubbleSort(int tablica[]){//stworzenie funkcji sortuj¹cej
    int length=10; //wprowadzenie zmiennej oznaczjacej d³ugoœæ tablicy
    for(int i=0;i<length;i++){ //przejscie przez kolejne elementy tablicy
        for(int j=1;j<length;j++){//pêtla s³u¿¹ca do porównania elementów tablicy
            if(tablica[j-1]>tablica[j]){//porownanie kolejnych elelmentow tablicy
                                        //(jeœli spelniony jest warunek wykonuje sie kod 11-13, jesli nie element zostaje na swoim miejscu)
               // zamienienie miejscami elementów tablicy (jeœli pierwszy jest wiekszy od drugiego)
               int a= tablica[j-1];
               tablica[j-1]=tablica[j];
               tablica[j]=a;

            }
        }
    }


}

int main()
{
   int tab[]={3,7,8,22,14,7,18,2,34,4}; // zainicjowanie tablicy
   int liczba; // szukana liczba w tablicy
   int znaleziona=0; //
   int poczatek=0; // zainicjowanie poczatku i konca tablicy w celu znalezienia srodka tablicy
   int koniec=9;
   int pivot; // srodkowy element zbioru liczb

   bubbleSort(tab); // wywo³anie funkcji sortujacej tablice
   printf("wprowdz jaka liczbe chcesz znaleŸæ \n");
   scanf("%d", &liczba); // wprowadzenie przez uzytkownika liczby , która chce odnalezc


   while(poczatek<=koniec) // jesli poczatkowy element tablicy jest mniejszy badz rowny ostatniemu wykona sie dzia³anie
	{
		pivot = (poczatek + koniec)/2; // wartosc pivotu(srodkowego elementu tablicy)

		if(liczba == tab[pivot]){ // wykonanie dzia³ania jesli szukana liczba jest rowna pivotowi
             printf("Indeks liczby wynosi: %d \n", pivot); // wyswietlenie indeksu liczby
             printf("miejce w pamieci liczby wynosi: %d \n",&tab[pivot]); //wyswietlenie miejsca w pamieci liczby
             znaleziona=1;
             break;
		}


		if(tab[pivot] > liczba) // wykonanie dzia³ania jesli szukana liczba jest mniejsza od pivotu
        {
            koniec = pivot - 1; // przypisanie do zmiennej koniec wartosci pomniejszononej o 1 od pivotu
                                // w celu dzia³ania na lewej stronie tablicy
        }

		else{ // wykonanie dzia³ania w przeciwnym wypadku
            poczatek = pivot + 1; // przypisanie do zmiennej poczatek wartosci powiekszonej o 1 od pivotu
                                // w celu dzia³ania na prawej stronie tablicy
		}
    }

	if(znaleziona==0){
                printf("podanej liczby nie ma w tablicy \n"); //wywolanie komunikatu
    }
}
