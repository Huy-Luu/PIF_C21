#include <stdio.h>
#include<math.h>

/*phuong trinh bac 2: ax^2+bx+c=0
dieu kien: a!=0;

ham nhap cac so a,b,c

ham tinh delta, quyet dinh nghiem

ham tinh nghiem;
*/

typedef struct
{
    int a,b,c;
}cof; // cof=coeffient

cof type_in()
{
    cof func;
    printf("Nhap so a: ");
    scanf("%d",&func.a);
    while(func.a==0)
    {
        printf("Error: a phai khac 0 : ");
        scanf("%d",&func.a);
    }
    printf("Nhap so b: ");
    scanf("%d",&func.b);
    printf("Nhap so c: ");
    scanf("%d",&func.c);
    return func;
}



int main()
{
    int delta;
    cof taken;
    taken=type_in();

    delta=((taken.b*taken.b)-4*taken.a*taken.c);

    printf("delta= %d \n", delta);

    if(delta<0) {printf("Phuongn trinh vo nghiem\n");}
    else if(delta==0)
    {
        printf("Phuong trinh co nghiem kep x= %d",(-taken.b/(2*taken.a)));

    }
    else
    {

        printf("Phuong trinh co 2 nghiem:\n");
        printf("Nghiem x1= %f\n",(-taken.b-sqrt(delta))/2*taken.a);
        printf("Nghiem x2= %f\n",(-taken.b+sqrt(delta))/2*taken.a);

    }


    return 0;
}
