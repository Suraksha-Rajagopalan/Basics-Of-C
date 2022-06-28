#include <stdio.h>

int main()
{
    int m, n;
    printf("Enter the rows of the matrix: ");
    scanf("%d", &m);
    printf("Enter the columns of the matrix: ");
    scanf("%d", &n);

    int arr1[m][n];
    printf("Enter the elements of the array1:\n ");
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &arr1[i][j]);

    int arr2[m][n];
    printf("Enter the elements of the 2:\n ");
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &arr2[i][j]);

    printf("The sum of matrices is: \n");

    for (int i = 0; i < m; i++){
    int sum;
        for (int j = 0; j < n; j++){
            sum = arr1[i][j] + arr2[i][j];
            printf("%d",sum);}
        printf("\n");
    }
    
    return 0;
}