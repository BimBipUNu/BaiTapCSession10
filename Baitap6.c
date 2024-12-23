/*Khởi tạo và gán giá trị cho mảng số nguyên bất kỳ,
yêu cầu người dùng nhập vào 1 số nguyên bất kỳ và sử dụng thuật toán tìm kiếm tuyến tính để tìm vị trí của phần tử đó trong mảng.
Nếu có nhiều phần tử trùng với số đã nhập thì lưu tất cả vị trí tìm được vào một mảng và in tất cả vị trí đó ra màn hình.*/
#include<stdio.h>
int main()
{
    int a[10]={1,2,3,4,5,2,6,2,7,8};
    int numIdex[10];
    int t=0;
    int num;
    printf("Nhập số nguyên cần kiểm tra: ");scanf("%d",&num);
    for (int i =0; i<10; i++)
    {
        if (a[i]==num)
        {
            numIdex[t]=i;
            t++;
        }
    }
    printf("Vị trí của %d trong mảng là phần tử thứ: ",num);
    for (int i=0; i<t; i++)
    {
        printf("%d ",numIdex[i]+1);
    }
}