#include <stdio.h>
#include <stdlib.h>


void linearSearch(int tab[], int liczba, int znaleziona)
{
    for (int i = 0; i < 10 ; i++) // przejscie przez wszystkie elementy tablicy w celu znalezienia szukanej liczby
    {
        if (liczba == tab[i] ) //wykonnie dzia³ania jesli szukana liczba jest rowna i'temu elementowi tablicy i wyjscie z petli
        {
        printf("indeks szukanej liczby wynosi %d \n ",i+1); //wyswietlenie komunikatu
        printf("miejsce w pamieci szukanej liczby wynosi: %d \n ",&tab[i]); //wyswietlenie komunikatu
            znaleziona = 1;
            break;
        }
    }

    if (znaleziona == 0){ //wykonanie dzia³ania jesli liczba nie zosta³a znaleziona
         printf("nie znaleziono liczby w tablicy\n");
    }


}



void main()
{  int tab[10]; // zainicjowanie tablicy przechowujacej 10 elementow

    int liczba, znaleziona = 0; // zainicjowanie zmiennej przechowujacej szukana liczbe i znaleziona liczbe

    printf("wprowadz 10 liczb do tablicy \n");
    for (int i = 0; i < 10; i++) //wprowadzenie przez uzytkownika 10 liczb
    {
        scanf("%d", &tab[i]);
    }

    printf("wprowadz szukana liczbe ");
    scanf("%d", &liczba); // wprowadzenie przez uzytkownika szukanej liczby
    linearSearch(tab,liczba,znaleziona); // wywolanie funkcji szukajacej elementu


}



