#include <stdio.h>
#include <stdlib.h>

 void bubbleSort(int tablica[]){//stworzenie funkcji sortuj�cej
    int length=15; //wprowadzenie zmiennej oznaczjacej d�ugo�� tablicy
    for(int i=0;i<length;i++){ //przejscie przez kolejne elementy tablicy
        for(int j=1;j<length;j++){//p�tla s�u��ca do por�wnania element�w tablicy
            if(tablica[j-1]>tablica[j]){//porownanie kolejnych elelmentow tablicy
                                        //(je�li spelniony jest warunek wykonuje sie kod 11-13, jesli nie element zostaje na swoim miejscu)
               // zamienienie miejscami element�w tablicy (je�li pierwszy jest wiekszy od drugiego)
               int a= tablica[j-1];
               tablica[j-1]=tablica[j];
               tablica[j]=a;

            }
        }
    }


}
int main(){
int tablica[15]={5,2,3,4,1,8,6,0,3,7,4,1,9,2,5};//
    printf("Wyswietlenie nieposortowanej tablicy\n");
     for(int i=0;i<15;i++){//wyswietlenie nieposortowanej tablicy
    printf("%d", tablica[i]);
     }
     printf("\nWyswietlenie posortowanej tablicy\n");
    bubbleSort(tablica);//wywyo�anie funkcji sortujacej tablice
    for(int i=0;i<15;i++){//wyswietlenie posortowanej tablicy
        printf("%d",tablica[i]);
    }
return 0;
}
