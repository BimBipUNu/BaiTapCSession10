/*Nhập số dòng và số cột mảng 2 chiều (row, col), khai báo và nhập giá trị phần tử mảng số nguyên 2 chiều đã khai báo.
Tiến hành sắp xếp các phần tử trên đường chéo phụ theo thứ tự giảm dần.*/
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
        }
    }
    //thêm các phần tử trên đường chéo phụ vào array
    for(int i=0,j=columns-1; i<rows && j>=0; i++,j--)
    {
        array[indexArray] = a[i][j];
        indexArray++;
    }
    //sắp xếp array giảm dần
    for(int i=0; i< indexArray-1; i++)
    {
        for(int j=0; j< indexArray-i-1; j++)
        {
            if(array[j]<array[j+1])
            {
                int temp = array[j];
                array[j]=array[j+1];
                array[j+1]=temp;
            }
        }
    }
    indexArray=0;
    //Gán lại giá trị cho đường chéo phụ
    for(int i=0,j=columns-1; i<rows && j>=0; i++,j--)
    {
        a[i][j]=array[indexArray];
        indexArray++;
    }
    //duyệt mảng 2 chiều, in kq
    for (int i=0; i< rows;i++)
    {
        for(int j=0; j<columns; j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}