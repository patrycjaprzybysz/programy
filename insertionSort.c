#include <stdio.h>
#include <stdlib.h>

void insertionSort(int tablica[]){
    int length=15;
    int j;
    int a;
    for(int i=1;i<length;i++){
         a=tablica[i];
         j=i-1;


    while(j>=0 && tablica[j]>a){
            tablica[j+1]=tablica[j];
            j--;

    }
    tablica[j+1]=a;
    }
}


int main(){
    int tablica[15]={5,2,3,4,1,8,6,0,3,7,4,1,9,2,5};
    printf("Wyswietlenie nieposortowanej tablicy\n");
     for(int i=0;i<15;i++){
    printf("%d", tablica[i]);
     }
     printf("\nWyswietlenie posortowanej tablicy\n");
    insertionSort(tablica);
    for(int i=0;i<15;i++){
        printf("%d",tablica[i]);
    }
return 0;
}
