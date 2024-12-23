/*Khởi tạo và gán giá trị cho mảng bất kỳ, yêu cầu người dùng nhập vào phần tử bất kỳ
và kiểm tra xem phần tử có tồn tại trong mảng không, in ra vị trí của phần tử đó.*/
#include<stdio.h>
int main()
{
    int num,active=0;
    int a[10]={1,2,3,4,5,6,7,8,9,10};
    printf("Nhập phần tử cần kiểm tra ");scanf("%d",&num);
    for (int i =0; i< 10; i++)
    {
        if(a[i]==num)
        {
            printf("Phần tử %d tồn tại trong mảng ở vị trí thứ %d",num,i+1);
            active=1;
        }
    }
    if(!active)
    {
        printf("Phần tử %d không tồn tại trong mảng",num);
    }
}