#include <stdio.h>
#include <stdlib.h>
int main()
{
    int number;
    printf("Dai stoinost na promenlivata: ");
    scanf("%d",&number);
    if(number%5==0)
    {
     printf("Chisloto e kranto na 5!");              
    }
    else
    {
        printf("Chisloto ne e kratno na 5!\n");
        if(number%5==1)
        {
         number = number + 4;              
        }
        else if(number%5==2)
        {
         number +=3;    
        }
        else if(number%5==3)
        {
         number +=2;    
        }
        else if(number%5==4)
        {
         number +=1;    
        }
        printf("Novoto chislo koeto se deli e ");
        printf("%d",number);
    }
    system("pause");
}
