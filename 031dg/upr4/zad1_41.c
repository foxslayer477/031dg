#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    double Rc,Xc,Yc,Yp,Xp,Dcp;
    printf("Enter Xp: ");
    scanf("%lf",&Xp);
    printf("Enter Yp: ");
    scanf("%lf",&Yp);
    printf("Enter Xp: ");
    scanf("%lf",&Xc);
    printf("Enter Xp: ");
    scanf("%lf",&Yc);
    printf("Enter Rc: ");
    scanf("%lf",&Rc);
    Dcp = sqrt((Xc-Xp)*(Xc-Xp)+(Yc-Yp)*(Yc-Yp));
    if(Dcp >Rc)
    {
     printf("Tochkata Dcp ne se namira v okrajnostta!");     
    }
    else
    {
        printf("Tochkata Dcp se namira v okrajnostta");
    }
    system("pause");
}
