#include <stdio.h>

int main()
{
    int length;
            printf("Chieu dai day so: ");
            scanf("%d",&length);

    int arr[length], max,pos; //khai bao day so

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

//_______________________________________sắp xếp
    for(int i=0; i<length-1; ++i)
    {
        max=arr[i];
        for(int j=i;j<length-1;++j)
        {
        if(arr[j+1]>max)
        {
            max=arr[j+1];
            pos=j+1;
        }
        }
        arr[pos]=arr[i];
        arr[i]=max;
    }

    printf("\nDay so sau khi sap xep lai la: ");
        for(int i=0;i<length;++i)
        {
            printf("%d ",arr[i]);
        }


    return 0;
}
