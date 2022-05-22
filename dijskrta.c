

#include <stdio.h>
#define INFINITY 9999 //inicjacja nieskonczonosci
#define MAX 10

void Dijkstra(int Graph[MAX][MAX], int n, int start);

void Dijkstra(int Graph[MAX][MAX], int n, int start) { // stworzenie funkcji obliczajacej najkrotsza droge
  int cost[MAX][MAX], distance[MAX], pred[MAX]; // inicjacja macierzy kosztow, dystansu pomiedzy wierzcholkami,poprzedniego wierzcholka
  int visited[MAX], count, mindistance, nextnode, i, j; // inicjacja odwiedzonego wierzcholka,minimalnego dystansu, nastêpnego wezla

  // stworzenie macierzy kosztow
  for (i = 0; i < n; i++)
    for (j = 0; j < n; j++)
      if (Graph[i][j] == 0)
        cost[i][j] = INFINITY; // przypisanie do niestartowego wierzcholka nieskonczonosci
      else
        cost[i][j] = Graph[i][j]; // przypisanie do startowego wierzcholka kosztu drogi

// start algorytmu od pierwszego wierzcho³ka
  for (i = 0; i < n; i++) {
    distance[i] = cost[start][i];
    pred[i] = start;
    visited[i] = 0;
  }

  distance[start] = 0;
  visited[start] = 1;
  count = 1;

  while (count < n - 1) { // wykonanie intrukcji dopoki sa dostepne wierzcholki (n to liczba wierzcholkow)
    mindistance = INFINITY; //


    for (i = 0; i < n; i++) //sprawdzenie czy nastêpny wezel nie by³ odwiedzony i czy jest najbli¿ej
      if (distance[i] < mindistance && !visited[i])  {
        mindistance = distance[i];
        nextnode = i;
      }
 // szukanie innej, krotszej drogi
    visited[nextnode] = 1;
    for (i = 0; i < n; i++)
      if (!visited[i])
        if (mindistance + cost[nextnode][i] < distance[i]) {
          distance[i] = mindistance + cost[nextnode][i];
          pred[i] = nextnode; // gdy znaleziona droga okaze sie krotsza zamienienie jej z poprzednia
        }
    count++;
  }

  // wyswietlenie dystansu
  for (i = 0; i < n; i++)
    if (i != start) {
      printf("\n Dystans z %d: %d", i, distance[i]);
    }
}
int main() {
  int Graph[MAX][MAX], i, j, n, u; // zainicjowanie grafu, liczby wierzcholkow grafu,
  n = 5; // liczba wierzcholkow grafu

  //utworzenie grafu

  Graph[0][0] = 0; // bezposrednia droga od a do a
  Graph[0][1] = 6; //  bezposrednia droga od a do b
  Graph[0][2] = 0; //  bezposrednia droga od a do c
  Graph[0][3] = 1; // bezposrednia droga od a do d
  Graph[0][4] = 0; // bezposrednia droga od a do e


  Graph[1][0] = 6; // bezposrednia droga od b do a
  Graph[1][1] = 0; // bezposrednia droga od b do b
  Graph[1][2] = 5; // bezposrednia droga od b do c
  Graph[1][3] = 2; // bezposrednia droga od b do d
  Graph[1][4] = 2; // bezposrednia droga od b do e


  Graph[2][0] = 0; // bezposrednia droga od c do a
  Graph[2][1] = 5; // bezposrednia droga od c do b
  Graph[2][2] = 0; // bezposrednia droga od c do c
  Graph[2][3] = 0; // bezposrednia droga od c do d
  Graph[2][4] = 5; // bezposrednia droga od c do e

  Graph[3][0] = 1; // bezposrednia droga od d do a
  Graph[3][1] = 2; // bezposrednia droga od d do b
  Graph[3][2] = 0; // bezposrednia droga od d do c
  Graph[3][3] = 0; // bezposrednia droga od d do d
  Graph[3][4] = 1; // bezposrednia droga od d do e


  Graph[4][0] = 0; // bezposrednia droga od e do a
  Graph[4][1] = 2; // bezposrednia droga od e do b
  Graph[4][2] = 5; // bezposrednia droga od e do c
  Graph[4][3] = 1; // bezposrednia droga od e do d
  Graph[4][4] = 0; // bezposrednia droga od e do e





  u = 0;
  Dijkstra(Graph, n, u); // wywolanie funkcji dijkstra

  return 0;
}
