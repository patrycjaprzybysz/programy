#include <stdio.h>
#include <stdlib.h>

int top=-1; // zadeklarowanie zmiennej globalnej top
int *stack; // zadeklarowanie wskaznika stack

void stack_empty(int top){ // funkcja sprawdzajaca czy stos jest pusty

if(top==-1){
    printf("%d \nstos jest pusty\n");
}else{
 printf("%d \nstos nie jest pusty\n");
}
}

int Top(){ // funkcja odczytujaca element na szczycie stosu
return stack[top]; // zwrocenie elementu na szczycie
}

void push(int element){ // funkcja dodajaca element do stosu
top++; //postinkrementacja "top"
stack[top]=element; // przypisanie do indeksu stosu elementu
}

void pop(){ // funkcja usuwajaca element ze stosu
//stack_empty(top);
return stack[top--]; // zwrocenie stosu pomniejszonego o jeden element

}

int main()
{
    int size= 6; // zainicjowanie ilosci elementow
    stack = (int *) malloc(sizeof(int) * size); // alokacja pamieci dla stosu

    printf("Sprawdzenie stosu: ");
    stack_empty(top); //wywołanie funkcji do sprawdzenia zawartosci stosu
    printf("\n");

    for (int i=0;i<size;i++){
        push(i+1);//wywołanie funkcji dodajacej elemnty do stosu
    }

    printf("stos po dodaniu wartosci \n"); //wyswitlenie stosu
    for (int i=0;i<top+1;i++){
        printf("stack[%d]: %d \n", i, stack[i]);
    }

    printf("\nstos po usunieciu wartosci \n");
    pop(); // wywołanie funkcji usuwajacej elemnty ze stosu
    pop();
    stack_empty(top); // wywołanie funkcji do sprawdzenia zawartosci stosu
    for (int i=0;i<top+1;i++){ // wyswietlenie stosu
        printf("stack[%d]: %d \n", i, stack[i]);
    }

    printf("\nwyswietlenie elementu na szczycie stosu,%d \n", Top()); // wywołani funkcji wyswietlajacej
                                                                                 // element na szczycie






}
