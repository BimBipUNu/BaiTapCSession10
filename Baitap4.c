/*Khởi tạo và gán giá trị cho mảng số nguyên bất kỳ,
hãy sử dụng thuật toán sắp xếp chọn (selection sort) để sắp xếp lại mảng theo thứ tự tăng dần.*/
#include<stdio.h>
int main()
{
    int a[10]={6,5,4,8,9,10,2,7,3,1};
    for (int i = 0; i < 10; i++)
    { 
        int minIndex = i;
        for (int j = i+1; j < 10; j++)
        {
            if (a[j] < a[minIndex])
            {
                minIndex = j;
            }
        }
        int temp = a[minIndex];
        a[minIndex] = a[i];
        a[i] = temp;
    }
    for(int i=0; i<10; i++)
    {
        printf("%d ",a[i]);
    }
}