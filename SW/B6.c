#include <stdio.h>

/*DESCRIPTION:

bài tập đổi từ đếm số chữ và từ trong cụm "Pay it forward"

đã chuyển thành đếm số chữ và từ có trong 1 cụm bất kì được nhập vào

Được nhập vào tối đa 50 kí tự

*/

#define EOS         input_string[50] //EOS = end of string
#define SPACE       32
#define del_word    0
#define BOA         65      //BEGINNING OF ALPHABET(CAPS)
#define EOA         90      //END OF ALPHABET(CAPS)
#define boa         97      //beginning of alphabet
#define eoa         122     //end of alphabet

//(input_string[i]>=BOA&&input_string[i]<=EOA)||(input_string[i]>=boa&&input_string[i]<=eoa) -----> the alphabet


int main()
{

    char input_string[50], temp;
    int spaces=1,counter;

    for(int i=0; i< (int) sizeof(input_string) ; ++i) // đếm số từ
    {
        input_string[i]=0; //không cho chương trình gán giá trị ngẫu nhiên

    }

    printf("Nhap chuoi ki tu: ");
    fgets(input_string,sizeof(input_string),stdin);



    for(int i=0; i< (int) sizeof(input_string) ; ++i) // đếm số từ
    {
        if(input_string[i]==SPACE)
        {
            ++spaces;
        }
    }

    /* debugging
    printf("truoc khi xep: ");
        for(int i=0; i< (int) sizeof(input_string); ++i)
    {
        printf("%c",input_string[i]);
    }*/


    //BUBBLE SORT sắp xếp theo thứ tự chữ cái
    for(int i=0; i<(int) sizeof(input_string); ++i)
    {
        {
            for(int j=0; j<(int) sizeof(input_string)-i-1; ++j)
            {
                if(input_string[j]>input_string[j+1])
                {
                    temp=input_string[j];
                    input_string[j]=input_string[j+1];
                    input_string[j+1]=temp;
                }
            }
        }
    }
/*
        printf("sau khi xep: ");
                for(int i=0; i< (int) sizeof(input_string); ++i)
    {
        printf("%c",input_string[i]);
    }
*/

/*
    for(int i=0; i< (int) sizeof(input_string); ++i)
    {
        printf("\nKi tu %d la: %c",i,input_string[i]);
    }
*/

    for(int i=0; i< (int) sizeof(input_string) ; ++i)
    {

        counter=1;

        for(int j=i+1; j< (int) sizeof(input_string); ++j)
        {
            if((input_string[j]>=BOA&&input_string[j]<=EOA)||(input_string[j]>=boa&&input_string[j]<=eoa))
            {
            if (input_string[j]==input_string[i])
            {
                ++counter;
                input_string[j]=del_word; // xóa từ để không bị lặp ở các lần đếm sau
            }
            }
        }
                    if((input_string[i]>=BOA&&input_string[i]<=EOA)||(input_string[i]>=boa&&input_string[i]<=eoa)) // không in cá từ đã xóa và dấu cách
            {
                printf("\nCo %d ki tu %c",counter,input_string[i]);
            }


    }



    printf("\n\nChuoi nay co %d tu\n",spaces);



    return 0;
}
