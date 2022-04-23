// Floyd Warshall's Algorithm

#include<stdio.h>
#include<conio.h>

#pragma warn-rvl

void main()
{
  int B[10][10], i, j, k, n;
  
  // for storing the name of the nodes
  char A[5][10];  
  
  printf("\nEnter number of nodes/vertices: ");         
  scanf("%d", &n);
  printf("\nEnter the initials (example assam= A) of the nodes (and follow the numeric code for further reference) :");
  // loop for names of the nodes
  for (i = 0; i < n; i++)                                      
  {   printf("\nnode no. %d", i+1);
      scanf("%s", &A[i][0]);
  }
  printf("\n Enter the (weighted) path parameter between the mentioned nodes----\n for no existing path enter '0': ");
  for (i = 0; i < n; i++)
  { for (j = 0; j < n; j++)
     {
        if (i == j)
          B[i][j] = 0;
        else {
          printf("\nform: %s to %s",A[i],A[j]);
         scanf("%d",&B[i][j]);
         if(B[i][j]==0)
         B[i][j]=9000;
        }
     }
  }
 printf("\n --------------------ORIGINAL INPUTS in form of matrix path is row to column:------------------------\n");
 for(i=0;i<n;i++)
 {  
    printf(" %s ",A[i]);
 }
 for(i=0;i<n;i++)
 { printf("\n%s",A[i]);
   for(j=0;j<n;j++)
   { 
     printf(" %d ",B[i][j]);
   }
 }

 for(k=0;k<n;k++)
   {   for(i=0;i<n;i++)
         {  for(j=0;j<n;j++)
              { if(B[i][j]>B[i][k]+B[k][j])
                B[i][j]=B[i][k]+B[k][j]; 
              }
         }
   }
   printf("\n  ------------------Using FLOYD WARHALL'S ALGORITHM we get the shoretes path in the form of matrix:------------- \n");
   for(i=0;i<n;i++)
 {  
    printf(" %s ",A[i]);
 }
   for(i=0;i<n;i++)
    { printf("\n%s",A[i]);
       for(j=0;j<n;j++)
       { 
         printf(" %d ",B[i][j]);
       }
    }
}
