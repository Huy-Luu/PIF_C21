#include <stdio.h>

//bài 13

typedef struct{ // struct cho size của ma trận gồm hàng và cột
int row,col;
} mat;


mat size()
{   mat m;
    scanf("%d %d",&m.row,&m.col);
    return m;
}

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

void trans(int row, int col, int original[row][col], int replace[col][row]) //transposition
{
    for(int i=0; i<row; ++i)
    {
        for(int j=0; j<col; ++j)
        {
            replace[j][i]=original[i][j];
        }
    }
}

int main()
{
    mat m1,m2; //m1 gốc, m2 chuyển vị

    printf("Kich thuoc ma tran: "); m1=size();

    m2.row=m1.col; m2.col=m1.row; //chuển vị kích thước

    int ori_mat[m1.row][m1.col],trans_mat[m2.row][m2.col];

    printf("Nhap gia tri cho ma tran: \n");
    value(1,m1.row,m1.col,ori_mat);
    printMat(m1.row,m1.col,ori_mat);

    trans(m1.row,m1.col,ori_mat,trans_mat);

    printf("Ma tran da chuyen vi la: \n");
    printMat(m2.row,m2.col,trans_mat);



}
