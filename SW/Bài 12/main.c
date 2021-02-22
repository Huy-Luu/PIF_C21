#include <stdio.h>
#include"user.h"


int main()
{
    mat m1,m2;
    int trigger;

//new method

//  lấy size và tính toán điều kiện
again:
    printf("size cua ma tran 1(hang truoc cot sau):\n"); m1=size();
    printf("size cua ma tran 2(hang truoc cot sau):\n"); m2=size();

    trigger=compare(m1,m2);
    if(trigger==none) goto again;

// khai báo các ma trận sau khi đã có size và điều kiện
// sum = ma trận tổng, diff = ma trận hiệu, prod = ma trận tích
    int mat1[m1.row][m1.col], mat2[m2.row][m2.col], sum[m1.row][m1.col], diff[m1.row][m1.col], prod[m1.row][m2.col];


//  lấy giá trị của các ma trận
    value(1,m1.row,m1.col,mat1);
    value(2,m2.row,m2.col,mat2);

    printf("\nMa tran 1:\n");
    printMat(m1.row,m1.col,mat1);

    printf("\nMa tran 2:\n");
    printMat(m2.row,m2.col,mat2);




// tính toán
    switch(trigger)
    {
        // +- 2 ma trận
    case 0:
    addSub(m1.row,m1.col,mat1,mat2,sum,diff);
    printf("\nMa tran tong:\n");
    printMat(m1.row,m1.col,sum);

    printf("\nMa tran hieu:\n");
    printMat(m1.row,m1.col,diff);
    break;

        // x 2 ma trận
    case 1:
    mul(m1.row,m1.col,m2.col,mat1,mat2,prod);
    printf("\nMa tran tich:\n");
    printMat(m1.row,m2.col,prod);
    break;


        // + - x 2 ma trận
    case 2:
    addSub(m1.row,m1.col,mat1,mat2,sum,diff);
    printf("\nMa tran tong:\n");
    printMat(m1.row,m1.col,sum);

    printf("\nMa tran hieu:\n");
    printMat(m1.row,m1.col,diff);

    mul(m1.row,m1.col,m2.col,mat1,mat2,prod);
    printf("\nMa tran tich:\n");
    printMat(m1.row,m2.col,prod);

    }

    return 0;
}



