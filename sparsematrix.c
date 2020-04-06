#include<stdio.h>

#define max 100

// a sparse matrix has more zero elements than none zero elements

int main(void){
    static int arr[max][max];
    int i, j, r, c;
    int ctr = 0;

    printf("How many rows and columns are in this matrix?");
    scanf("%d %d", &r, &c);

    printf("Enter the elements in the matrix: \n");
    for(i=0; i<r; i++){
        for(j=0; j<c; j++){
            scanf("%d", &arr[i][j]);
            if(arr[i][j] == 0){
                ++ctr;
            }
        }
    }
    if (ctr>((r*c)/2))
    {
        printf("The given matrix is a sparse matrix.\n");
    }
    else
    {
        printf("The given matrix is not a sparse matrix.\n");
    }
    printf("There are %d number of zeros in the matrix.\n", ctr);

    return 0;
}