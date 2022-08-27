
#include <stdio.h>

int main()
{
    int i,j;
    for(i=1;i<=13;i++)
    {   
        for(j=1;j<=19;j++)
        {   
           if(((j>=4-i && j<=6+i) || (j>=14-i && j<=16+i)) && (i>=1 && i<=3))
            {
               printf(" *");
           }
         else if(((j>=5-i && j<=3+i) || (j>=18-i && j<=15+i)) && (i==4))
          {
              printf(" *");
          }
          else if((j>=4+i && j<=17-i) && (i==4))
          {  if(j==8)
            {
              printf("   M");
             }
             if(j==9)
            {
              printf("y");
             }
             if(j==10)
            {
              printf("S");
             }
             if(j==11)
            {
              printf("i");
             }
             if(j==12)
            {
              printf("r");
             }
             if(j==13)
            {
              printf("G  ");
             }
          }
          
           else if((j>=i-3 && j<=23-i) && i>=5)
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
    * * * * * *           * * * * *    

   * * * * * * *       * * * * * * *  

 * * * * * * * * *   * * * * * * * * *

 * * * * * * *   MySirG   * * * * * *

   * * * * * * * * * * * * * * * * *  

     * * * * * * * * * * * * * * *    

       * * * * * * * * * * * * *      

         * * * * * * * * * * *        

           * * * * * * * * *          

             * * * * * * *            

               * * * * *              

                 * * *                

                   * 
                   
*/                   
                   