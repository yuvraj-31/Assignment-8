

#include <stdio.h>

int main()
{
    int i,j,k;
    for(i=1;i<=5;i++)
    {   k=65;
        for(j=1;j<=9;j++)
        {   
            if((j==i || j==10-i) || i==1)
            {
                printf(" *");
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

/*        
         * * * * * * * * *

           *           *  

             *       *    

               *   *      

                 *     
     
*/          
          



    
   
