#include<stdio.h>

#define max 100


int main(void){
    int p[max], q[max], r[max];
    int m, n;
    int i, j, k;

    printf("Enter length of first array: ");
    scanf("%d", &m);
    printf("Enter %d elements of the first array in sorted order\n", m);
    for(i=0; i<m; i++){
        scanf("%d", &p[i]);
    }

    printf("Enter length of second array: ");
    scanf("%d", &n);
    printf("Enter %d elements of the second array in sorted order\n", m);
    for(i=0; i<n; i++){
        scanf("%d", &q[i]);
    }

    i=j=k=0;

    while((i<m) && (j<n)){
        if(p[i] < q[j]){
            r[k] = p[i];
            i++;
            k++;
        }
        else{
            if(q[j] < p[i]){
                r[k] = q[j];
                j++;
                k++;
            }
            else{
                r[k] = p[i];
                k++;
                i++;
                r[k] = q[j];
                k++;
                j++;
            }
        }
    }
    while(i<m){
        r[k] = p[i];
        k++;
        i++;
    }
    while (j<n)
    {
        r[k] = q[j];
        k++;
        j++;
    }
    printf("\nThe combined sorted array is: \n");
    for(i=0; i<k; i++){
        printf("%d\n", r[i]);
    }


    return 0;
}