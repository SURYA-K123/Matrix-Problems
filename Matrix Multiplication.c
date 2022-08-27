void main()
{
    int m1,n1,m2,n2;
    printf("Enter the number of rows for matrix A :");
    scanf("%d",&m1);
    printf("Enter the number of columns for matrix A :");
    scanf("%d",&n1);
    printf("Enter the number of rows for matrix B :");
    scanf("%d",&m2);
    printf("Enter the number of columns for matrix B :");
    scanf("%d",&n2);
    if (n1==m2)
    {
        int mat_A[m1][n1],mat_B[m2][n2],pro_mat[m1][n2];

        for (int i=1;i<=m1;i++)
        {
            for (int j=1;j<=n1;j++)
            {
                printf("Enter A [%d][%d] :",i,j);
                scanf("%d",&mat_A[i-1][j-1]);
            }
        }
        for (int i=1;i<=m2;i++)
        {
            for (int j=1;j<=n2;j++)
            {
                printf("Enter B [%d][%d] :",i,j);
                scanf("%d",&mat_B[i-1][j-1]);
            }
        }
        for (int i=0;i<m1;i++)
        {
            for (int j=0;j<n2;j++)
            {
                int c=0;
                for (int k=0;k<n1;k++)
                {
                    int m;
                    m=mat_A[i][k]*mat_B[k][j];
                    c+=m;
                }
                pro_mat[i][j]=c;

            }
        }
        for (int i=0;i<m1;i++)
        {
            for (int j=0;j<n2;j++)
            {
              printf("%d ",pro_mat[i][j]);
            }
            printf("\n");
        }
    }
    else
    {
        printf("Matrix multiplication is not possible to the matrix of the given order");
    }
    getch();
}
