#include <stdio.h>

int main(){
    int m, n;
    printf("Enter the rows of the matrix: ");
    scanf("%d", &m);
    printf("Enter the columns of the matrix: ");
    scanf("%d", &n);

    int arr1[m][n];
    printf("Enter the elements of the array 1:\n ");
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &arr1[i][j]);
    
    int arr2[m][n];
    printf("Enter the elements of the array 2:\n ");
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &arr2[i][j]);

    int mul[m][n];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; ++j)
        {
            mul[i][j]=0;
            for (int k = 0; k < n; k++){
                mul[i][j] += (arr1[i][k]*arr2[k][j]);
            }
        }
    }

    for (int i = 0; i < m; i++ ){
        for (int j = 0; j < n; j++ ){
            printf("%d ",mul[i][j]);
        }
        printf("\n");
    }
    return 0;
}