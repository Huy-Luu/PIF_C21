#include <stdio.h>

int main()
{
    int money, amt1, amt2, amt5, amt10, temp_money;
    printf("Nhap so tien ban co: ");
    scanf("%d",&money);

    amt10 = money/10; // tính số 10$

    temp_money = money-10*amt10; // tính số 5$
    amt5 = temp_money/5;

    temp_money-= 5*amt5; // tính số 2$
    amt2= temp_money/2;

    temp_money-= 2*amt2; // 1$ là số còn lại
    amt1=temp_money;

    printf("So dong tien nho nhat dang co la: \n");
    printf("%d dong 1$\n",amt1);
    printf("%d dong 2$\n",amt2);
    printf("%d dong 5$\n",amt5);
    printf("%d dong 10$\n",amt10);

    return 0;
}
