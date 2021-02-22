#ifndef USER_H_INCLUDED
#define USER_H_INCLUDED

#define add             0 //cong 2 ma tran
#define multiplicate    1 //nhan 2 ma tran
#define both            2 //nhan va cong ca 2 ma tran
#define none            3 //size ko thoa


typedef struct{ // struct cho size của ma trận gồm hàng và cột
int row,col;
} mat;

//functions

int compare(mat m1,mat m2); // điều kiện để thực hiện các phép toán trên ma trận

mat size(); //lấy size của các ma trận

void value(int num,int row,int col,int m[row][col]); // nhập giá trị của các ma trận

void rintMat(int row, int col, int m[row][col]); //hàm để in ma trận

void addSub(int row,int col,int m1[row][col], int m2[row][col],int result_sum[row][col],int result_diff[row][col]); //hàm để tính tổng và hiệu

void mul(int row,int col,int col2, int m1[row][col],int m2[col][col2],int result[row][col2]);   //hàm để tính tích


#endif // USER_H_INCLUDED
