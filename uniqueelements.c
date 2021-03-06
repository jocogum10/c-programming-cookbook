#include<stdio.h>

#define max 100

int ifexists(int z[], int u, int v){
    int i;
    for(i=0; i<u; i++){
        if (z[i]==v){
            return 1;       //true
        }
    }
    return 0;
}

int main(void){
    int p[max], q[max];
    int m;
    int i, k;
    
    k = 0;

    printf("Enter length of the array: ");
    scanf("%d", &m);

    printf("Enter %d elements of the array\n", m);
    for(i=0; i<m; i++){
        scanf("%d", &p[i]);
    }

    q[0] = p[0];

    k = 1;

    for(i=1; i<m; i++){
        if (!ifexists(q, k, p[i]))
        {
            q[k] = p[i];
            k++;
        }
    }
    printf("\nThe unique elements in the array are:\n");
    for(i=0; i<k; i++){
        printf("%d\n", q[i]);
    }

    return 0;
}