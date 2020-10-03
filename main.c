#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void main(){
    int vector[10] = {1, 2, 3, 4 ,5 ,6 ,7 ,8 ,9, 10}; 
    int vector2[10] = {11, 12, 13, 14 ,15 ,16 ,17 ,18 ,19, 20}; 
    int i=0;
    for(i; i<10; i++){ 
        if(vector[i] % 2 == 0){ printf("%i ", vector2[i]);}
    }
    getch();
}