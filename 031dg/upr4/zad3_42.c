#include <stdio.h>
#include <stdlib.h>
int main()
{
 int X, Y;
 printf("Vuvedi X ");
 scanf("%d",&X);
 printf("Vuvedi Y ");
 scanf("%d",&Y);
 if(X==0)
 {
  if(Y==0)
  {
         printf("Centar na sistemata");
  }
   else
   {
    printf("Leji na ordinatata");   
   }
 }
 else
 {
     if(Y==0)
     {
             printf("Leji na abscisata");
     }
     else
     {
         if(X>0)
         {
                if(Y>0)
                {
                 printf("Leji v 1 kvadrant");      
                }
                else
                {
                    printf("Leji v 2 kvadrant");
                }
         }
         else
         {
             if(Y>0)
             {
                 printf("Leji vuv 2 kvadrant");   
             }
             else
             {
                 printf("leji v 3 kvadrant");
             }
         }
     }
 } 
 system("pause");    
}
