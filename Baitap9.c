/*Nhập số dòng và số cột mảng 2 chiều (row,col), khai báo và nhập giá trị phần tử mảng số nguyên 2 chiều đã khai báo.
Tiến hành sắp xếp các phần tử trên đường chéo chính theo thứ tự tăng dần.*/
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
            printf("Nhập phần tử ở vị trí (%d,%d): ",i,j);scanf("%d",&a[i][j]);
            if(i==j)//Cho các phần tử trên đường chéo chính vào array
            {
                array[indexArray]=a[i][j];
                indexArray++;
            }
        }
    }
    //sắp xếp array tăng dần
    for(int i=0; i< indexArray-1; i++)
    {
        for(int j=0; j< indexArray-i-1; j++)
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
    for (int i=0; i< rows;i++)
    {
        for(int j=0; j<columns; j++)
        {
            if (i==j)//gán lại giá trị cho các phần tử trên đường chéo chính
            {
                a[i][j]=array[indexArray];
                indexArray++;
            }
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}