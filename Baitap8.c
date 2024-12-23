/*Nhập số dòng và số cột mảng 2 chiều (n, m), khai báo và nhập giá trị phần tử mảng số nguyên 2 chiều đã khai báo
Tiến hành sắp xếp các phần tử trong mảng tăng dần theo từng cột và in dưới dạng ma trận sau khi sắp xếp.*/
#include<stdio.h>
int main()
{
    int rows,columns;
    printf("Nhập số hàng của mảng 2 chiều: ");scanf("%d",&rows);
    printf("Nhập số cột của mảng 2 chiều : ");scanf("%d",&columns);
    //Tạo mảng 2 chiều
    int a[rows][columns];
    int array[rows*columns]; //mảng 1 chiều
    int indexArray=0;//index của mảng 1 chiều
    for(int i=0; i<rows;i++ )
    {
        for(int j=0; j<columns; j++)
        {
            printf("Nhập phần tử ở vị trí (%d,%d): ",i,j);scanf("%d",&array[indexArray]);//Nhập phần tử vào mảng 1 chiều
            indexArray++;//index + 1
        }
    }
    //Sắp xếp lại mảng 1 chiều
    for(int i=0; i<indexArray-1; i++)
    {
        for(int j=0; j<indexArray-i-1; j++)
        {
            if(array[j]>array[j+1])
            {
                int temp = array[j];
                array[j]=array[j+1];
                array[j+1]=temp;
            }
        }
    }
    indexArray=0;
    //thêm phần tử từ mảng 1 chiều đã sắp xếp vào mảng 2 chiều
    for(int j =0;j <columns; j++)
    {
        for(int i=0; i<rows; i++)
        {
            a[i][j]=array[indexArray];
            indexArray++;
        }
    }
    //Duyệt mảng 2 chiều, in kq
    for(int i =0; i<rows; i++)
    {
        for(int j=0; j<columns; j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}