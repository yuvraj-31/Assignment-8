

#include <stdio.h>

int main()
{
    int i,j,k;
    for(i=1;i<=4;i++)
    {   k=1;
        for(j=1;j<=7;j++)
        {  if(j>=5-i && j<=3+i)
           {
               if(j>=5-i && j<=4)
                  {
                     printf(" %d",k);
                     k++;
                  }
                if(j<=3+i && j>4)
                  {
                     printf(" %d",k-2);
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
