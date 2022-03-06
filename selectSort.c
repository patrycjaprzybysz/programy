#include <stdio.h>
#include <stdlib.h>

void selectionSort(int tablica[]){ // stworzenie funkcji do sortowania liczb
    int length=11; //podanie romiaru tablicy
  for(int i=0;i<length;i++){ // przejscie przez wszystkie elementy tablicy i za³o¿enie ¿e element na pozycji i jest najmniejszy
            int min=i; // przypisanie indeksu elementu tablicy do zmiennej min
    for(int j=i+1;j<length;j++){ // przejœcie przez kolejne elementy tablicy, zaczynaj¹c od kolejnego
        if(tablica[min]>tablica[j]){ //sprawdzenie czy kolejny element w tablicy nie jest mniejszy od wczeœniejszego elementu
            min=j; //przypisanie indeksu elemnetu do zmiennej min, jeœli ten kolejny element jest mniejszy od poprzedniego
        }
    }   // zamiana kolejnych elementów tablicy z najmniejszymi w tablicy
        int a = tablica[i];
        tablica[i]=tablica[min];
        tablica[min]=a;

        }
    }

int main(){
    int tablica[11]={2,3,4,5,7,6,1,4,3,2,2}; // zainicjowanie tablicy
    printf("Wyswietlenie nieposortowanej tablicy\n");
     for(int i=0;i<11;i++){ // wyswietlenie nieposortowanej tablicy
    printf("%d", tablica[i]);
     }
     printf("\nWyswietlenie posortowanej tablicy\n");
    selectionSort(tablica);// wywo³anie funkcji sortujacej tablice
    for(int i=0;i<11;i++){ // wyswietlenie posortowanej tablicy
        printf("%d",tablica[i]);
    }
return 0;
}
