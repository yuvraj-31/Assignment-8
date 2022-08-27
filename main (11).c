

#include <stdio.h>

int main()
{
    int i,j,k;
    for(i=1;i<=5;i++)
    {   k=65;
        for(j=1;j<=9;j++)
        {
            if(j>=6-i && j<=4+i)
            {   
                if(j>=6-i && j<=5)
                   {
                     printf(" %c",k);
                     k++;
                   }
               
                if(j<=4+i && j>5)
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
    
    //output of the above program
    /*          A        

              A B A      

            A B C B A    

          A B C D C B A  

        A B C D E D C B A
        
        */
