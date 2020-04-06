#include <stdio.h>

#define max 100

int main(void){
    int p[max], n, i, k, j;

    printf("Enter length of array: ");
    scanf("%d", &n);

    printf("Enter %d elements of array\n", n);
    for(i=0; i<=n-1; i++){
        scanf("%d", &p[i]);
    }

    printf("\nThe array is:\n");
    for(i=0; i<=n-1; i++){
        printf("%d\n", p[i]);
    }

    printf("\nEnter position where to insert:");
    scanf("%d", &k);

    k--;    //decremented by one since array starts at 0

    for(j=n-1; j>=k; j--){
        p[j+1] = p[j];     // shift all elements by copying the current value to the next value
    }

    printf("\nEnter the value to insert: ");
    scanf("%d", &p[k]);

    printf("\nArray after insertion of element: \n");
    for(i=0; i<=n; i++){
        printf("%d\n", p[i]);
    }

    return 0;
}