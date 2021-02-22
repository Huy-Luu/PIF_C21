#include <stdio.h>

int main()
{
    int length;
            printf("Chieu dai day so: ");
            scanf("%d",&length);

    int arr[length], temp=0; //khai bao day so

        for(int i=0;i<length;++i)
        {
            printf("Gia tri thu %d=",i+1);
            scanf("%d",&arr[i]);
        }

        printf("Day so ban dau la: ");
        for(int i=0;i<length;++i)
        {
            printf("%d ",arr[i]);
        }

        for(int i=0; i<length; ++i)
        {
            for(int j=0; j<length-i-1; ++j)
            {
                if(arr[j]>arr[j+1])
                {
                    temp=arr[j];
                    arr[j]=arr[j+1];
                    arr[j+1]=temp;
                }
            }
        }

        printf("\nDay so sau khi duoc sap xep: ");
        for(int i=0;i<length;++i)
        {
            printf("%d ",arr[i]);
        }

    return 0;
}
