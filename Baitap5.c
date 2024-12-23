/*Khởi tạo và gán giá trị cho mảng số nguyên bất kỳ, hãy sử dụng thuật toán sắp xếp bất kỳ để sắp xếp lại mảng theo thứ tự tăng dần.
Yêu cầu người dùng nhập vào 1 số nguyên bất kỳ và sử dụng thuật toán tìm kiếm nhị phân để tìm vị trí của phần tử đó trong mảng.*/
#include<stdio.h>
int main()
{
    int a[10]={6,5,4,8,9,10,2,7,3,1};
    for (int i =0; i<10-1; i++)
    {
        for (int j =0; j<10-i-1; j++)
        {
            if (a[j]>a[j+1])
            {
                int temp = a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
            
        }
    }
    int num,numIndex = -1;
    printf("Nhập số nguyên bất kì: ");scanf("%d",&num);
    int left=0;
    int right=9;
    while(left<=right)
    {
        int mid = left + (right-left)/2;
        if(a[mid] <num)
        {
            left=mid+1;
        }else if(a[mid] >num)
        {
            right=mid-1;
        }else
        {
            numIndex=mid;
            break;
        }
    }
    if (numIndex == -1)
    {
        printf("Phần tử %d không tồn tại trong mảng",num);

    }else
    {
        printf("Phần tử %d tồn tại trong mảng ở vị trí thứ %d",num,numIndex+1);

    }
}