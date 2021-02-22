#include <stdio.h>


int main()
{   int height, decreasing_spaces;
    printf("Chieu cao cua tam giac la: ");
    scanf("%d",&height); //

    decreasing_spaces = height -1;

    for(int row=1; row <= height; ++row) //vòng lặp xử lí mỗi dòng
    {
        for(int spaces=decreasing_spaces; spaces >0; --spaces) // vòng lặp để in khoảng cách
        {
                printf(" ");
        }

        --decreasing_spaces;

        for(int points=1 ; points<= (2*row-1) ;++points )       //vòng lặp để in các dấu #
        {
            printf("#");
        }
        printf("\n");
    }


}
