#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define INFINITY 9999999
#define MAX 11

void Prima(int Graph[MAX][MAX], int n, int start)
{
    int parent[MAX];// drzewo zawierajace wierzcholki(wszytskie)
    int waga[MAX]; // waga krawedzi
    int i;
    int j;
    bool zawiera[MAX]; // zawiera wierzcholki  w drzewie


   for (int i = 0; i < n; i++){
        waga[i] = INFINITY; // przypisanie do kazdego wierzcho³ka wagi nieskoñczonosci
        zawiera[i] = false; // przypisanie braku krawedzi miedzy wierzcho³kami
   }

   waga[start]=0; //pierwszy wierzcholek
   parent[start]=-1; // korzen drzewa


   for(int i=0; i<n-1; i++){ // pêtla przeszukujaca minimalny wierzcholek
    int minimum= INFINITY, index; // zainicjowanie minimalnej wartosci
    for(int j=0; j<n;j++){
        if(zawiera[j]== false && waga[j]<minimum){ // warunek szukajacy najmniejszej wagi nie wystepuj¹cej w drzewie
            minimum= waga[j];
            index=j;
        }
    }



  //dodanie wierzcholka do drzewa i podanie jego wartosci jako minimalnej
   zawiera[index]=true;
   for (int j = 0; j < n; j++){
        if(Graph[index][j]>0 && zawiera==false && Graph[index][j]<waga[j]){ // zamiana wartosci gdy znajdziemy mniejsza
                                                                            //wage wierzcholka
          parent[j] = index;
          waga[j] = Graph[index][j];
        }


    }
}


//wyswietlenie dystansu
    for (i = 0; i < n; i++)
    if (i != start) {
      printf("%d - %d \t%d \n", parent[i], i, Graph[i][parent[i]]);
    }

}


int main()
{
    int Graph[MAX][MAX], i, j, n, u;
    n=11; // ilosc wierzcholkow grafu
//tworzenie grafu

  Graph[0][0] = 0; // bezposrednia droga od a do a
  Graph[0][1] = 0; //  bezposrednia droga od a do b
  Graph[0][2] = 1; //  bezposrednia droga od a do c
  Graph[0][3] = 4; // bezposrednia droga od a do d
  Graph[0][4] = 5;// bezposrednia droga od a do e
  Graph[0][5] = 5;//...
  Graph[0][6] = 0;
  Graph[0][7] = 0;
  Graph[0][8] = 22;
  Graph[0][9] = 0;
  Graph[0][10] = 0;


  Graph[1][0] = 0; // bezposrednia droga od b do a
  Graph[1][1] = 0; // bezposrednia droga od b do b
  Graph[1][2] = 16; // bezposrednia droga od b do c
  Graph[1][3] = 0; // bezposrednia droga od b do d
  Graph[1][4] = 0; // bezposrednia droga od b do e
  Graph[1][5] = 0;//....
  Graph[1][6] = 0;
  Graph[1][7] = 0;
  Graph[1][8] = 3;
  Graph[1][9] = 30;
  Graph[1][10] = 0;


  Graph[2][0] = 1; // bezposrednia droga od c do a
  Graph[2][1] = 16; // bezposrednia droga od c do b
  Graph[2][2] = 0; // bezposrednia droga od c do c
  Graph[2][3] = 1; // bezposrednia droga od c do d
  Graph[2][4] = 0; // bezposrednia droga od c do e
  Graph[2][5] = 0;
  Graph[2][6] = 0;
  Graph[2][7] = 0;
  Graph[2][8] = 0;
  Graph[2][9] = 0;
  Graph[2][10] = 0;

  Graph[3][0] = 4; // bezposrednia droga od d do a
  Graph[3][1] = 0; // bezposrednia droga od d do b
  Graph[3][2] = 1; // bezposrednia droga od d do c
  Graph[3][3] = 0; // bezposrednia droga od d do d
  Graph[3][4] = 1;// bezposrednia droga od d do e
  Graph[3][5] = 0;
  Graph[3][6] = 0;
  Graph[3][7] = 0;
  Graph[3][8] = 0;
  Graph[3][9] = 0;
  Graph[3][10] = 0;


  Graph[4][0] = 5; // bezposrednia droga od e do a
  Graph[4][1] = 0; // bezposrednia droga od e do b
  Graph[4][2] = 0; // bezposrednia droga od e do c
  Graph[4][3] = 1; // bezposrednia droga od e do d
  Graph[4][4] = 0; // bezposrednia droga od e do e
  Graph[4][5] = 12;
  Graph[4][6] = 0;
  Graph[4][7] = 0;
  Graph[4][8] = 0;
  Graph[4][9] = 0;
  Graph[4][10] = 0;

   Graph[5][0] = 5; // bezposrednia droga od e do a
  Graph[5][1] = 0; // bezposrednia droga od e do b
  Graph[5][2] = 0; // bezposrednia droga od e do c
  Graph[5][3] = 0; // bezposrednia droga od e do d
  Graph[5][4] = 12; // bezposrednia droga od e do e
  Graph[5][5] = 0;
  Graph[5][6] = 27;
  Graph[5][7] = 0;
  Graph[5][8] = 0;
  Graph[5][9] = 0;
  Graph[5][10] = 0;

   Graph[6][0] = 0; // bezposrednia droga od e do a
  Graph[6][1] = 0; // bezposrednia droga od e do b
  Graph[6][2] = 0; // bezposrednia droga od e do c
  Graph[6][3] = 0; // bezposrednia droga od e do d
  Graph[6][4] = 0; // bezposrednia droga od e do e
  Graph[6][5] = 27;
  Graph[6][6] = 0;
  Graph[6][7] = 5;
  Graph[6][8] = 0;
  Graph[6][9] = 0;
  Graph[6][10] = 18;

   Graph[7][0] = 0; // bezposrednia droga od e do a
  Graph[7][1] = 0; // bezposrednia droga od e do b
  Graph[7][2] = 0; // bezposrednia droga od e do c
  Graph[7][3] = 0; // bezposrednia droga od e do d
  Graph[7][4] = 0; // bezposrednia droga od e do e
  Graph[7][5] = 0;
  Graph[7][6] = 5;
  Graph[7][7] = 0;
  Graph[7][8] = 5;
  Graph[7][9] = 20;
  Graph[7][10] = 0;

   Graph[8][0] = 22; // bezposrednia droga od e do a
  Graph[8][1] = 3; // bezposrednia droga od e do b
  Graph[8][2] = 0; // bezposrednia droga od e do c
  Graph[8][3] = 0; // bezposrednia droga od e do d
  Graph[8][4] = 0; // bezposrednia droga od e do e
  Graph[8][5] = 0;
  Graph[8][6] = 0;
  Graph[8][7] = 5;
  Graph[8][8] = 0;
  Graph[8][9] = 25;
  Graph[8][10] = 0;

   Graph[9][0] = 0; // bezposrednia droga od e do a
  Graph[9][1] = 30; // bezposrednia droga od e do b
  Graph[9][2] = 0; // bezposrednia droga od e do c
  Graph[9][3] = 0; // bezposrednia droga od e do d
  Graph[9][4] = 0; // bezposrednia droga od e do e
  Graph[9][5] = 0;
  Graph[9][6] = 10;
  Graph[9][7] = 20;
  Graph[9][8] = 25;
  Graph[9][9] = 0;
  Graph[9][10] = 3;

  Graph[10][0] = 0; // bezposrednia droga od e do a
  Graph[10][1] = 0; // bezposrednia droga od e do b
  Graph[10][2] = 0; // bezposrednia droga od e do c
  Graph[10][3] = 0; // bezposrednia droga od e do d
  Graph[10][4] = 0; // bezposrednia droga od e do e
  Graph[10][5] = 0;
  Graph[10][6] = 18;
  Graph[10][7] = 0;
  Graph[10][8] = 0;
  Graph[10][9] = 3;
  Graph[10][10] = 0;





  u = 0;
  Prima(Graph, n, u); // wywolanie funkcji prima
  return 0;
}
