#include<stdio.h>
#include<stdlib.h>

struct cart
{
    int orderno;
    char emailaddress[30];
    char password[30];
};

int main(void){
    struct cart mycart;
    struct cart *ptrcart, *ptrcust;
    ptrcart = &mycart;

    printf("Enter order number: ");
    scanf("%d", &mycart.orderno);
    printf("Enter email address: ");
    scanf("%s", &mycart.emailaddress);
    printf("Enter password: ");
    scanf("%s", &mycart.password);
    
    printf("\nDetails of the customer are as follows:\n");
    printf("Order number: %d\n", ptrcart->orderno);
    printf("Email Address: %s\n", ptrcart->emailaddress);
    printf("Passwor:d %s\n", ptrcart->password);

    printf("\nEnter new email address: ");
    scanf("%s", ptrcart->emailaddress);
    printf("\nEnter new password: ");
    scanf("%s", ptrcart->password);

    printf("\nModified customer's information is:\n");
    printf("Order number: %d\n", mycart.orderno);
    printf("Email Address: %s\n", mycart.emailaddress);
    printf("Password: %s\n", mycart.password);

    ptrcust = (struct cart *)malloc(sizeof(struct cart));

    printf("\nEnter information of another customer: \n");
    printf("Enter order number: ");
    scanf("%d", &ptrcust->orderno);
    printf("Enter email address: ");
    scanf("%s", &ptrcust->emailaddress);
    printf("Enter password: ");
    scanf("%s", &ptrcust->password);

    printf("\nDetails of the second customer are as follows:\n");
    printf("Order number: %d\n", ptrcust->orderno);
    printf("Email Address: %s\n", ptrcust->emailaddress);
    printf("Password: %s\n", ptrcust->password);

    return 0;
}
