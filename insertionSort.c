#include <stdio.h>
#include <stdlib.h>

void insertionSort(int tablica[]){// stworzenie funkcji sortujacej tablice
    int length=15;//wprowadzenie zmiennej oznaczaj¹cej d³ugoœæ tablicy
    int j;
    int a;
    for(int i=1;i<length;i++){//przejœcie przez kolejne elementy tablicy zaczynajac od drugiego
         a=tablica[i];//przechowywanie elementów tablicy w tymczasowej zmiennej
         j=i-1;//przechowywanie indeksu kolejnego elementu tablicy


    while(j>=0 && tablica[j]>a){//szukanie miejsca do wstawienia elementu tablicy w posortowanej czêœci tablicy
            tablica[j+1]=tablica[j];//przesuwanie elementów tablicy o jedno miejsce w prawo (jesli elelmenty po lewej stronie s¹ wieksze od a)
                                    //jesli nie s¹ wieksze element wraca na swoje miejsce
            j--;

    }
    tablica[j+1]=a;//wstawienie elementu tablicy w odpowiednie miejce
    }
}


int main(){
    int tablica[15]={5,2,3,4,1,8,6,0,3,7,4,1,9,2,5};// zainicjowanie tablicy
    printf("Wyswietlenie nieposortowanej tablicy\n");
     for(int i=0;i<15;i++){// wyswietlenie nieposortowanej tablicy
    printf("%d", tablica[i]);
     }
     printf("\nWyswietlenie posortowanej tablicy\n");
    insertionSort(tablica);//wywo³anie funkcji sortujacej tablice
    for(int i=0;i<15;i++){//wyswietlenie posortowanej tablicy
        printf("%d",tablica[i]);
    }
return 0;
}
