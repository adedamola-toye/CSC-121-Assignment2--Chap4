/*
Collecting money becomes increasingly difficult during periods of recession, so companies may tighten their credit limits to prevent their accounts receivable
(money owed to them) from becoming too large. In response to a prolonged recession, one company
has cut its customers’ credit limits in half. Thus, if a particular customer had a credit limit of $2000,
it’s now $1000. If a customer had a credit limit of $5000, it’s now $2500. Write a program that
analyzes the credit status of three customers of this company. For each customer you’re given:
a) The customer’s account number.
b) The customer’s credit limit before the recession.
c) The customer’s current balance (i.e., the amount the customer owes the company).
Your program should calculate and print the new credit limit for each customer and should
determine (and print) which customers have current balances that exceed their new credit limits.
*/

#include <stdio.h>
int main(void){
    float newCreditLimit = 0;
    float oldCreditLimit, currentBalance;
    int accountNo;
    unsigned int customer = 1;

    for(customer = 1; customer <=3; ++customer){
        printf("Customer%u\n", customer);
        printf("Enter customer's account number: ");
        scanf("%d", &accountNo);
        printf("Enter customer's credit limit before recession: $");
        scanf("%f", &oldCreditLimit);
        printf("Enter customer's current credit balance: $");
        scanf("%f", &currentBalance);

        newCreditLimit = oldCreditLimit/2;
        printf("New credit limit: $ %.2f\n", newCreditLimit);

        if (currentBalance > newCreditLimit){
            printf("WARNING! Customer %u (%d) has exceeded its credit limits\n\n", customer, accountNo);
        }
        else{
            printf("Customerc%u (%d) has not yet exceeded its credit limits\n\n", customer, accountNo);
        }
    }
}