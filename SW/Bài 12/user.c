#include<stdio.h>

#define add             0 //cong 2 ma tran
#define multiplicate    1 //nhan 2 ma tran
#define both            2 //nhan va cong ca 2 ma tran
#define none            3 //size ko thoa


typedef struct{ // struct cho size của ma trận gồm hàng và cột
int row,col;
} mat;

/* #############

HÀM ĐỂ TÍNH TOÁN ĐIỀU KIỆN THỰC HIỆN PHÉP TOÁN MA TRẬN

   #############*/

int compare(mat m1,mat m2)
{
    int trigger;
    if((m1.row==m2.row)&&(m1.col==m2.col)&&(m1.col==m2.row))
    {
        printf("Co the thuc hien ca 3 phep + - x tren 2 ma tran nay");
        trigger=both;
    }

    else if(m1.col==m2.row)
    {
        printf("Co the thuc hien phep x tren 2 ma tran nay");
        trigger=multiplicate;

    }

    else if((m1.row==m2.row)&&(m1.col==m2.col))
    {
        printf("Co the thuc hien 2 phep + - tren 2 ma tran nay");
        trigger=add;
    }

    else
    {
        printf("Hai ma tran khong tuong tac duoc voi nhau. Moi nhap lai size\n");
        trigger=none;
    }

    return trigger;
}

/* ################

HÀM LẤY VỀ KÍCH THƯỚC CỦA MA TRẬN

   ################*/

mat size()
{   mat m;
    scanf("%d %d",&m.row,&m.col);
    return m;
}

/* ###################
    HÀM ĐỂ NHẬP CÁC GIÁ TRỊ CỦA MA TRẬN
   ###################*/

void value(int num,int row,int col,int m[row][col])
{
    printf("\nNhap gia tri cho ma tran %d (Nhap tu trai sang phai, tu tren xuong duoi)\n",num);
    for(int i=0;i<row;++i)
    {
        for(int j=0;j<col;++j)
        {
            printf("mat(%d)[%d][%d]=",num,i+1,j+1);
            scanf("%d",&m[i][j]);
        }
    }
}

/* ########################

    HÀM ĐỂ IN CÁC MA TRẬN

   ########################*/

void printMat(int row, int col, int m[row][col])
{
    for(int i=0;i<row;++i)
    {
        for(int j=0;j<col;++j)
        {
            printf("%d ",m[i][j]);
        }
        printf("\n");
    }
}

/* ###########

    HÀM TÍNH TỔNG VÀ HIỆU 2 MA TRẬN

   ###########*/

void addSub(int row,int col,int m1[row][col], int m2[row][col],int result_sum[row][col],int result_diff[row][col])
{
    for(int i=0; i<row; ++i)
    {
        for(int j=0; j<col; ++j)
        {
                result_sum[i][j]= m1[i][j] + m2[i][j];
        }
    }

    for(int i=0; i<row; ++i)
    {
        for(int j=0; j<col; ++j)
        {
                result_diff[i][j]= m1[i][j] - m2[i][j];
        }
    }
}

/* ##############

    HÀM ĐẾ TÍNH TÍCH 2 MA TRẬN

   ##############*/
void mul(int row,int col,int col2, int m1[row][col],int m2[col][col2],int result[row][col2])
{
    int temp=0;              // temporary
    for(int i=0; i<row; ++i)
    {
        for(int comp=0; comp<col2; ++comp)
        {
            temp=0;
        for(int j=0; j<col; ++j)
        {
            temp+= m1[i][j]*m2[j][comp];
        }
        result[i][comp]=temp;
        }
    }
}
