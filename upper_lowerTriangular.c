#include <stdio.h>

int main()
{
    int m, n;
    printf("Enter the rows of the matrix: ");
    scanf("%d", &m);
    printf("Enter the columns of the matrix: ");
    scanf("%d", &n);

    int arr[m][n];

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i < j)
                arr[i][j] = 1;
            if (j < i)
                arr[i][j] = -1;
            if (i == j)
                arr[i][j] = 0;
        }
    }
    printf("The matrix is: \n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++){
            if (i<=j){
                printf("%d  ", arr[i][j]);}
            else{
                printf("%d ",arr[i][j]);
            }}
        printf("\n");}
    return 0;
}