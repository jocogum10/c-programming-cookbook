#include<stdio.h>

int main(void){
    int p[100], i, n, a;

    printf("Enter the length of the array: ");
    scanf("%d", &n);

    printf("Enter %d elements of the array \n", n);
    for(i=0; i<=n-1; i++){
        scanf("%d", &p[i]);
    }

    printf("\nThe array is: \n");
    for(i=0; i<=n-1; i++){
        printf("%d\n", p[i]);
    }

    printf("Enter the position/location to delete: ");
    scanf("%d", &a);

    a--;

    for(i=a; i<=n-2; i++){
        p[i] = p[i+1];      //values from the next cell is copied to current cell
    }

    p[n-1] = 0;     // last cell is set to zero

    printf("Array after deleting the element is \n");
    for(i=0; i<=n-2; i++){
        printf("%d\n", p[i]);
    }

    return 0;
}