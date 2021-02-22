#include <stdio.h>

typedef struct
{
int r;
int im;
} x;

//hàm nhập 2 giá trị
x take_in()
{   x temp;
    printf("Nhap vao so phuc: ");
    printf("\nPhan thuc: "); scanf("%d",&temp.r);
    printf("Phan ao: "); scanf("%d",&temp.im);
    return temp;

}

//hàm tính tổng 2 số phức
void add(x a,x b)
{ x total;
total.r=a.r+b.r;
total.im=a.im+b.im;
if(total.im>0) printf("\nTong 2 so phuc la: %d+%di",total.r,total.im);
else           printf("\nTong 2 so phuc la: %d%di",total.r,total.im);
}

//hàm tính hiệu 2 số phức
void sub(x a,x b)
{ x dif;
dif.r=a.r-b.r;
dif.im=a.im-b.im;
if(dif.im>0) printf("\nHieu 2 so phuc la: %d+%di",dif.r,dif.im);
else         printf("\nHieu 2 so phuc la: %d%di",dif.r,dif.im);

}

//hàm tính tích 2 số phức
void prod(x a,x b)
{
    x product;
    product.r=a.r*b.r-a.im*b.im;
    product.im=a.im*b.r+a.r*b.im;
    if(product.im>0) printf("\nTich 2 so phuc la: %d+%di",product.r,product.im);
    else             printf("\nTich 2 so phuc la: %d%di",product.r,product.im);

}



int main()
{
    x x1,x2;
    x1=take_in();
    x2=take_in();
//xuất x1
if(x1.im>0) printf("x1= %d+%di",x1.r,x1.im);
else        printf("x1= %d%di",x1.r,x1.im);

//xuất x2
if(x2.im>0) printf("\nx2= %d+%di",x2.r,x2.im);
else        printf("\nx2= %d%di",x2.r,x2.im);

add(x1,x2);
sub(x1,x2);
prod(x1,x2);


    return 0;
}
