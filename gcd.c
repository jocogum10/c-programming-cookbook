#include<stdio.h>

int gcd(int p, int q);

int main(void){
    int x, y, g;
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

    g = gcd(x, y);

    printf("Greatest Common Divisor of %d and %d is %d", x, y, g);

    return 0;
}

int gcd(int a, int b){
    int m;
    m = a % b;
    if(m==0){
        return b;
    }
    else
    {
        gcd(b,m);
    }
    
}