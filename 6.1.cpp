
#include <stdio.h>

int main()
{
    int number;
    int sum;
    for(int i=1;i<=5;i++)
    {
        printf("Nhap phan tu thu %d: ",i);
        scanf("%d",&number);
    
    if(number%2!=0)
    {
        sum+=number;
    }
    }
    printf("tong cua cac so le la: %d",sum);
    return 0;
}

