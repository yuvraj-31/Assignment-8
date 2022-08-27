

#include <stdio.h>

int main()
{
    int i,j,k;
    for(i=1;i<=7;i++)
    {   k=65;
        for(j=1;j<=13;j++)
        {
            if(j>=6+i || j<=8-i)
            {   
                if(j<=8-i)
                   {
                     printf(" %c",k);
                     k++;
                   }
                 if(i==1 && j>7)
                 {
                     printf(" %c",k-2);
                     k--;
                 }
               
                if((j>=6+i && j>7) && i>=2)
                   {
                     printf(" %c",k-1);
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

/*    A B C D E F G F E D C B A

      A B C D E F   F E D C B A

      A B C D E       E D C B A

      A B C D           D C B A

      A B C               C B A

      A B                   B A

      A                       A
      
      */



    
   
