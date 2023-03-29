#include <stdio.h>
#include <stdlib.h>
int main()
{
    double arr[15];
    double num;
    int i;
    for(i=0;i<15;i++)
    {
     scanf("%f",&num);
     arr[15]=num;
    }
    for(i=0;i<15;i++)
    {
     if((i+1)%3==0)
     {
       printf("%f   %d\n",arr[i],i);            
     }                
    }
 system("pause");   
}
