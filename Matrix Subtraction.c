void main()
{
    int m,n;
    printf("Enter the number of rows of the matrix :");
    scanf("%d",&m);
    printf("Enter the number of columns of the matrix :");
    scanf("%d",&n);
    int mat_A[m][n],mat_B[m][n],sub_Mat[m][n];
    for (int i=1;i<=m;i++)
    {
        for (int j=1;j<=n;j++)
        {
            printf("Enter A[%d][%d] :",i,j);
            scanf("%d",&mat_A[i-1][j-1]);
        }
    }
    for (int i=1;i<=m;i++)
    {
        for (int j=1;j<=n;j++)
        {
            printf("Enter B[%d][%d] :",i,j);
            scanf("%d",&mat_B[i-1][j-1]);
        }
    }
    for (int i=0;i<m;i++)
    {
        for (int j=0;j<n;j++)
        {
            int a;
            a=mat_A[i][j]-mat_B[i][j] ;
            sub_Mat[i][j]=a;
        }
    }
    for (int i=0;i<m;i++)
    {
        for (int j=0;j<n;j++)
        {
            printf("%d ",sub_Mat[i][j]);
        }
        printf("\n");
    }
    getch();
}

