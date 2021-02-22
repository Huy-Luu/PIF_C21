#include <stdio.h>

int main()
{
    int length;
    printf("Nhap chieu dai day so: ");
    scanf("%d",&length);

    int arr[length];
    double avg,sum=0;

    for(int i=0; i<length; ++i)
    {
        printf("Gia tri phan tu thu %d=",i+1);
        scanf("%d",&arr[i]);
    }

    for(int i=0; i<length; ++i)
    {
        sum+=arr[i];
    }
    avg=sum/length;

    printf("Tong la: %f",sum);
    printf("\nTrung binh la: %f",avg);


    return 0;
}
