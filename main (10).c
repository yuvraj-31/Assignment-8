

#include <stdio.h>

int main()
{
    int i,j,k;
    for(i=1;i<=4;i++)
    {   k=1;
        for(j=1;j<=7;j++)
        {  if(j>=3+i || j<=5-i)
           {
               if(j<=5-i)
                  {
                     printf(" %d",k);
                     k++;
                  }
                  if(i==1 && j>=5)
                  {
                      printf(" %d",k-2);
                      k--;
                  }
                if((j>=3+i && j>4) && i>=2)
                  {
                     printf(" %d",k-1);
                     k--;
                  }
           }
           
            else
            {
              printf("  "); 
            }
        }
        printf("\n\n");
        
    }
    
    
    return 0;
}



//output of the above program
 /*  1 2 3 4 3 2 1

     1 2 3   3 2 1

     1 2       2 1

     1           1

*/
