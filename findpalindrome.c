//find out whether the entered number is a palindrome or not
#include<stdio.h>
#include<math.h>

#define max 10

int top = -1;
int stack[max];

void push(int);
int pop();
int findpalindrome(int);

int main(void){
    int n;
    printf("Enter a number ");
    scanf("%d", &n);
    if(findpalindrome(n)){
        printf("%d is a palindrome number", n);
    }
    else
    {
        printf("%d is not a palindrome number", n);
    }

    return 0;
}

int findpalindrome(int numb){
    int j, value, remainder, temp, count;
    temp = numb;
    while (numb > 0)
    {
        remainder = numb % 10;
        push(remainder);
        numb = numb / 10;
    }
    numb = temp;
    count = 0;
    value = 0;
    while (top >= 0)
    {
        j = pop();
        value = value + j*pow(10, count);
        count++;
    }
    if(numb==value){
        return(1);      //true
    }
    else
    {
        return(0);      //false
    }
}

void push(int m){
    top++;
    stack[top] = m;
}

int pop(){
    int j;
    if(top==-1){
        return(top);
    }
    else
    {
        j = stack[top];
        top--;
        return(j);
    }
    
}