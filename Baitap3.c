/*Khởi tạo và gán giá trị cho mảng số nguyên bất kỳ,
hãy sử dụng thuật toán sắp xếp chèn (insertion sort) để sắp xếp lại mảng theo thứ tự tăng dần.*/
#include<stdio.h>
int main()
{
    int a[10]={6,5,4,8,9,10,2,7,3,1};
    for (int i =1; i < 10; i++)
    {
        int key = a[i];
        int j = i-1;
        while(a[j]>key && j>=0)
        {
            a[j+1]=a[j];
            j=j-1;
        }
        a[j+1]=key;
    }
    for(int i=0; i<10; i++)
    {
        printf("%d ",a[i]);
    }
}