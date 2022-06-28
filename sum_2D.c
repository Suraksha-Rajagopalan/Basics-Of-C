#include <stdio.h>

int main(){
    int m, n;
    printf("Enter the rows of the matrix: ");
    scanf("%d", &m);
    printf("Enter the columns of the matrix: ");
    scanf("%d", &n);

    int arr[m][n];
    printf("Enter the elements of the array:\n ");
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &arr[i][j]);

    printf("The given matrix is: \n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++){
            printf("%d ", arr[i][j]);}
        printf("\n");}

    int sum=0;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            sum += arr[i][j];
        }
    }

    printf("The sum of all elements is: %d",sum);
    return 0;
}