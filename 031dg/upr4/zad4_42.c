#include <stdio.h>
#include <stdlib.h>
int main()
{
    int day, month, year;
    printf("Day: ");
    scanf("%d",&day);
    printf("Month: ");
    scanf("%d",&month);
    printf("Year: ");
    scanf("%d",&year);
    if(year<0)
    {
              printf("Ne sushtestvuva otricatelna godina!");
    }
    else
    {
        if(year%4==0)
        {
         if(month==7||month==8)
         {
          if(day<=31)
          {
                    printf("Sushtestvuva takava data! ");
          }   
         }
         else if(month==2)
         {
              if(day<=29)
              {
                 printf("Sushtestvuva takava data! "); 
              }
         }            
         else if(month%2==1)
         {
             if(day<=31)
              {
                 printf("Sushtestvuva takava data! "); 
              }         
         }
         else if(month%2==0)
         {
              if(day<=30)
              {
                 printf("Sushtestvuva takava data! ");    
              }
         }
        }
        else if(year%4!=0)
        {
         if(month==7||month==8)
         {
          if(day<=31)
          {
                    printf("Sushtestvuva takava data! ");
          }   
         }
         else if(month==2)
         {
              if(day<=28)
              {
                 printf("Sushtestvuva takava data! "); 
              }
         }            
         else if(month%2==1)
         {
             if(day<=31)
              {
                 printf("Sushtestvuva takava data! "); 
              }         
         }
         else if(month%2==0)
         {
              if(day<=30)
              {
                 printf("Sushtestvuva takava data! ");    
              }
         }
        }
    }
    system("pause");
}
