
#include <stdio.h>
#include <stdlib.h>

int size = 0; //zdefiniowanie zmiennej globalnej "size"

void change(int *x , int *y){ // stworzenie funkcji change
int temp = *y; //przypisanie wartosci zmiennej y pod adres zmiennej temp
*y = *x; // przypisanie adresu zmiennej x pod adres zmiennej y
*x = temp; // przypisanie wartosci zmiennej temp pod adres zmiennej x
}

void heapify(int tab[], int size,int i){ // stworzenie funkcji heapify
if(size==1){ // jesli "size" jest rowny 1
    printf(tab[size]); // wypisanie w konsoli tablicy, ktora ma jeden element
}else{ // jesli "size" jest rozny od 1
    int max = i; // przypisanie do zmiennej "max" wartosci "i"
    int lCh = 2*i+1; // wyliczenie indeksu lewego dziecka
    int rCh = 2*i+2; // wyliczenie indeksu prawego dziecka

if(lCh<size && tab[lCh]>tab[max]){ // jesli indeks lewego dziecka jest mniejszy od rozmiaru kopca
                                  //oraz wartoœæ lewego dziecka jest wiêksza od wartoœci obecnie (max) najwiêkszego dziecka
      max = lCh; // zamienienie wartosci "max" na wartoœc lewego dziecka
}
if(rCh<size && tab[rCh]>tab[max]){ // jesli indeks prawego dziecka jest mniejszy od rozmiaru kopca
                                  //oraz wartoœæ prawego dziecka jest wiêksza od wartoœci obecnie (max) najwiêkszego dziecka
    max = rCh; // zamienienie wartosci "max" na wartosc prawego dziecka
}
if(max != i){ // jesli max jest ro¿ny od "i" znaleziono wiêksze dziecko
    change(&tab[i], &tab[max]); // zamienienie miejscami wartoœci z indeksem oraz wartosci z indeksem "max"
    heapify(tab, size, max); // wywo³anie rekurencyjne funkcji heapify
    }
    }
    }

void insert(int tab[], int newValue){ //stworzenie funkcji dodajacej elelment do kopca
if(size==0){ // jesli tablica jest pusta
    tab[0]=newValue; // zapisanie "newValue" do tablicy (newValue to nowa wartosc dodawana do kopca)
    size=size+1; // zwiêkszanie "size" o 1
}else{ //jesli tablica nie jest pusta
    tab[size]=newValue; // zapisanie "newValue" do tablicy o indeksie size
    size=size+1; // zwiêkszanie "size" o 1
for(int i=(size/2)-1; i >= 0; i--){ // przejscie po wszystkich elementach tablicy wiekszych badz rownych 0,
                                    //gdzie i to indeks rodzica
     heapify(tab, size, i); // wywo³anie rekurencyjne funkcji heapify
    }
    }
    }

void deleteRoot(int tab[], int deleteNum){ // stworzenie funckji usuwajacej element z kopca
  int i;
  change(&tab[i], &tab[size - 1]); // wstawienie ostatnieo elementu w niejsce korzenia
  size=size-1; // zmniejszenie "size" o 1
  heapify(tab, size, i); // wywo³anie rekurencyjne funkcji heapify
}

int main()
{

  int tab[10]; //wielkosc tablicy(ilosc elementow tablicy)

  //dodanie elementow do tablicy
  insert(tab,24);
  insert(tab,17);
  insert(tab,9);
  insert(tab,5);
  insert(tab,6);
  insert(tab,12);
  insert(tab,2);
  insert(tab,0);
  insert(tab,1);
  insert(tab,7);

printf("\nwyswietlenie kopca\n");

  for (int i = 0; i < 10; ++i) // wyswietlenie kopca
    printf("%d ", tab[i]);
    return 0;
}
