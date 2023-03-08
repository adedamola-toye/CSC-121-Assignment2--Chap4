/*
One interesting application of computers is drawing graphs
and bar charts. Write a program that reads five numbers (each between 1 and 30). For each number
read, your program should print a line containing that number of adjacent asterisks. For example,
if your program reads the number seven, it should print *******
*/

#include <stdio.h>
int main(void){
    int lineCounter, asteriskCounter, number; //variable  to count number of lines; number of asterisks and to store the number inputted

    for(lineCounter=1; lineCounter<=5; lineCounter++){
        printf("Enter a number between 1 and 30: ");
        scanf("%d", &number);

         if (number <1 || number>30){ //If number inputted is not between 1 and 30
            printf("Invalid number! Number must be between 1 and 30");
            lineCounter--; //redo that particular line number so that the line Counter can still end at 5
        }

        if(number >1 &&  number <30){
            for (asteriskCounter=1; asteriskCounter<=number; asteriskCounter++){
            printf("*");
            }  
        }
        printf("\n");
       
    }
        
}