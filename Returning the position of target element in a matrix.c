int main()
{
    int a,t;
    printf("Enter the number of entries :");
    scanf("%d",&a);
    printf("Enter the target sum :");
    scanf("%d",&t);
    int b[a];
    for(int i=0;i<a;i++)
    {
        printf("Enter the number :");
        scanf("%d",&b[i]);
    }
    for(int i=0;i<=a;i++)
    {
        printf("%d ",b[i]);
    }
    printf("\n");
    for (int j=0;j<=a;j++)
    {
        for (int k=j+1;k<=a;k++)
        {
            if (b[j]+b[k]==t)
            {
               printf("%d  ",j);
               printf("%d\n",k);
            }
        }
    }
    return 0;
}
