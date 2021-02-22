#include <stdio.h>

// CEASER CODE

#define boa 97   //beginning of alphabet
#define eoa 122  // end of alphabet


int main()
{
    int shift;
    char input_string[50],encode[50];

    for(int i=0; i< (int) sizeof(input_string); ++i)
    {
        input_string[i]=0;
    }

    printf("Nhap chuoi can ma hoa: ");
    fgets(input_string,sizeof(input_string),stdin);

    printf("%s",input_string);

    /*
    for(int i=0; i< (int) sizeof(input_string); ++i)
    {
        printf("%c",input_string[i]);
    }
    */

    printf("Nhap 1 so de ma hoa: ");
    scanf("%d",&shift);


    printf("Chuoi sau ma hoa: ");

//mã hóa
    for(int i=0; i< (int) sizeof(input_string); ++i)
    {
        if((input_string[i]>=boa)&&(input_string[i]<(eoa-shift)))
        {
            encode[i]=(input_string[i]+shift);
            printf("%c",encode[i]);
        }

        else if(input_string[i]>=(eoa-shift)&&input_string[i]<=eoa)
        {
            encode[i]=(input_string[i]-(eoa-boa-shift+1));
            printf("%c",encode[i]);
        }

        else
        {
            printf("%c", input_string[i]);
            encode[i]=input_string[i];
        }
    }

    printf("\nChuoi luu trong encode: %s",encode);

//giải mã

    printf("\nGiai ma lai chuoi ban dau: ");
    for(int i=0; i< (int) sizeof(encode); ++i)
    {
        if((encode[i]>=boa+shift)&&(encode[i]<(eoa)))
        {
            printf("%c",encode[i]-shift);
        }

        else if(encode[i]>=(boa)&&encode[i]<(boa+shift))
        {
            printf("%c",encode[i]+(eoa-boa-shift+1));
        }

        else
        {
            printf("%c", encode[i]);

        }
    }


    return 0;
}
