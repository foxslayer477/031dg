#include <stdio.h>
#include <stdlib.h>
int main()
{
double arr[10];
double num;
double real;
int br;
int i;
int b;
for( i=0;i<10;i++)
{
scanf("%f",&num);
arr[i]=num;    
}   
scanf("%f",&real);
for(b=0;b<10;b++)
{
 if(arr[b]>real)
 {
 printf("%f ",arr[i]);
 br++;
 }                            
}
printf("  %d",br);
system("pause");
}
