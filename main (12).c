

#include <stdio.h>

int main()
{
    int i,j,k;
    for(i=1;i<=4;i++)
    {   k=65;
        for(j=1;j<=7;j++)
        {
            if(j>=i && j<=8-i)
            {   
                if(j>=i && j<=4)
                   {
                     printf(" %c",k);
                     k++;
                   }
               
                if(j<=8-i && j>4)
                   {
                     printf(" %c",k-2);
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




//output of the given program

/*      A B C D C B A

          A B C B A  

            A B A    

              A    
              
    */
    
   
