#include <stdio.h>
#include <stdlib.h>

 void bubbleSort(int tablica[]){
    int length=15;
    for(int i=0;i<length;i++){
        for(int j=1;j<length;j++){
            if(tablica[j-1]>tablica[j]){

               int a= tablica[j-1];
               tablica[j-1]=tablica[j];
               tablica[j]=a;

            }
        }
    }


}
int main(){
int tablica[15]={5,2,3,4,1,8,6,0,3,7,4,1,9,2,5};
    printf("Wyswietlenie nieposortowanej tablicy\n");
     for(int i=0;i<15;i++){
    printf("%d", tablica[i]);
     }
     printf("\nWyswietlenie posortowanej tablicy\n");
    bubbleSort(tablica);
    for(int i=0;i<15;i++){
        printf("%d",tablica[i]);
    }
return 0;
}
