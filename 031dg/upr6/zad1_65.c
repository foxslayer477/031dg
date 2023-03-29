#include <stdio.h>
#include <stdlib.h>
int main()
{
    int arr[6];
    int num;
    int min;
    int ai;
    int b;
    int i;
    for(b=0;b<6;b++)
    {
     scanf("%d",&num);
     arr[b]=num;       
    }
    min=arr[0];
    for(i=0;i<6;i++)
    {
     if(arr[i]<min)
     {
       min=arr[i];
       ai=i;            
     }       
    }
    printf("%d    %d",min, ai);
    system("pause");      
}
