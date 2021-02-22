#include <stdio.h>



int main()
{
    int length;
            printf("Chieu dai day so: ");
            scanf("%d",&length);

    int arr[length], max,min; //khai bao day so

        for(int i=0;i<length;++i)
        {
            printf("Gia tri thu %d=",i+1);
            scanf("%d",&arr[i]);
        }

        //In ra dãy số
        printf("Day so cua ban la: ");
        for(int i=0; i<length;++i)
        {
            printf("%d ",arr[i]);
        }

        //Tìm max và min
        if(arr[0]>arr[1])
        {
            max=arr[0];
            min=arr[1];
        }
        else
        {
            max=arr[1];
            min=arr[0];
        }

        for(int i=2; i<length ;++i)
        {
            if(max<arr[i])
                max=arr[i];
            else if(arr[i]<min)
                min=arr[i];

        }

        printf("\nmax = %d\n",max);
        printf("min = %d\n",min);


    return 0;
}
