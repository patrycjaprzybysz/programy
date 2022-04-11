#include <stdio.h>
#include <stdlib.h>

int top=-1; // zadeklarowanie zmiennej globalnej top=-1
int *queue; // zadeklarowanie wskaznika queue

void enqueue(int element){ // funkcja dodajaca element do kolejki
top++; // postinkrementacja "queue"
queue[top]=element; // dodawanie elementow na koniec kolejki
}

int dequeue(){ // funkcja usuwajaca element z kolejki
return queue[top--]; // zwracanie pomniejszonej kolejki

}

int main()
{
    int size=5; // zainicjowanie ilosci elementow
    queue = (int *) malloc(sizeof(int) * size);// alokacja pamieci dla kolejki

    for (int i=0;i<size;i++){
        enqueue(i+1); // wywo³anie funkcji dodajacej element do kolejki
    }

    printf("kolejka pod dodaniu elementow \n"); //wyswietlenie kolejki
    for (int i=0;i<top+1;i++){
        printf("queue[%d]: %d \n", i, queue[i]);
    }

     for(int i=1; i<size;i++){
        queue[i-1] = queue[i];
    }
    dequeue();// wywo³anie funkcji usuwajacej element  kolejki

    printf("\nkolejka po usunieciu elementow \n"); // wyswietlenie kolejki
    for (int i=0;i<top+1;i++){
        printf("queue[%d]: %d \n", i, queue[i]);
    }


}
