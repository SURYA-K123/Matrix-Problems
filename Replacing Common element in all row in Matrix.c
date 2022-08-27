#include <stdio.h>
int main(){
    int row,column;

    printf("Enter the row length :");
    scanf("%d",&row);

    printf("Enter the column length :");
    scanf("%d",&column);
    int mat[row][column];

    for (int i=0;i<row;i++)
    {
        for (int j=0;j<column;j++)
        {
         scanf("%d",&mat[i][j]);
        }

    }
     for (int i=0;i<row;i++)
    {
        for (int k=0;k<column;k++)
        {
            printf("%d\t",mat[i][k]);

        }
        printf("\n");
    }
    printf("\n\n\n");
    for(int i=0;i<row;i++)
    { int c=0;
      for (int j=0;j<row;j++)
      {
          for (int k=0;k<column;k++)
          {
              if(mat[0][i]==mat[j][k])
              {
                  c+=1;
              }
              else
              {
                  continue;
              }
          }
      }

  if (c>=column)
      {
         int v=mat[0][i];
         for (int m=0;m<row;m++)
         {
           for (int n=0;n<column;n++)
           {
               if (v==mat[m][n])
               {
                   mat[m][n]=-1;
               }
               else
               {
                   continue;
               }
           }
        }
    }
 }
    for (int i=0;i<row;i++)
    {
        for (int k=0;k<column;k++)
        {
            printf("%d\t",mat[i][k]);

        }
        printf("\n");
    }

    return 0;
}
