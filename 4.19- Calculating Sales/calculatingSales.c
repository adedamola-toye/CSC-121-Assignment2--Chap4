/*Write a program that reads a series of pairs of numbers as follows:
a) Product number
b) Quantity sold for one day
Your program should use a switch statement to help determine the retail price for each product.
Your program should calculate and display the total retail value of all products sold last week.*/

#include <stdio.h>
int main(void){
    int productNo, day, quantitySoldPerDay;
    float totalRetailValue = 0;
    float retailValuePerDay = 0;
    float retailValue, retailPrice;

        for(day=1; day<=7; day++){
            retailValuePerDay=0;
            printf("Day %d: \n", day);
            printf("Enter product number (-1 to end):  ");
            scanf("%d", &productNo);
            
            while(productNo != -1){
                switch(productNo){
                    case 1:
                        retailPrice = 2.98;
                        break;
                    case 2:
                        retailPrice = 4.50;
                        break;
                    case 3:
                        retailPrice = 9.98;
                        break;
                    case 4:
                        retailPrice = 4.49;
                        break;
                    case 5:
                        retailPrice = 6.87;
                        break;
                    default:
                        printf("Product %d is not available\n", productNo);
                        retailPrice = 0;
                        printf("Enter another product number between from 1 to 5: ");
                        scanf("%d", &productNo);
                        break;

                }
                printf("Enter quantity sold for one day: ");
                scanf("%d", &quantitySoldPerDay);
            
                retailValue = retailPrice * quantitySoldPerDay;
                retailValuePerDay+=retailValue;
            
                printf("Enter product number (-1 to end): ");
                scanf("%d", &productNo);

            }
            printf("Total retail value for day %d : $ %.2f\n\n",day, retailValuePerDay);
    }
    totalRetailValue+=retailValuePerDay;
    printf("\nTotal retail value for one week : $ %.2f", totalRetailValue);
}


