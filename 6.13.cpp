
#include <stdio.h>

int main()
{
    int ngay,thang;
    printf("Nhap ngay: ");
    scanf("%d",&ngay);
    printf("Nhap thang: ");
    scanf("%d",&thang);
    if(thang>0&&thang <13 && ngay>0&&ngay<32)
    {
    if(thang==1)
    {
        if(ngay <20)
        {
            printf("Cung ma ket");
        }
        else
        {
            printf("Cung bao binh");
        }
    }
    if(thang==2)
    {
        if(ngay <19)
        {
            printf("Cung bao binh");
        }
        else if(ngay>18 && ngay <30)
        {
            printf("Cung song ngu");
        }
        else
        {
            printf("Thang 2 khong co ngay nay.");
        }
    }
    if(thang==3)
    {
        if(ngay <21)
        {
            printf("Cung song ngu");
        }
        else
        {
            printf("Cung Bach Duong");
        }
    }
    if(thang==4)
    {
        if(ngay <21)
        {
            printf("Cung Bach Duong");
        }
        else
        {
            printf("Cung Kim Nguu");
        }
    }
    if(thang==5)
    {
        if(ngay <21)
        {
            printf("Cung Kim Nguu");
        }
        else
        {
            printf("Cung Song tu");
        }
    }
    if(thang==6)
    {
        if(ngay <22)
        {
            printf("Cung Song Tu");
        }
        else
        {
            printf("Cung Cu giai");
        }
    }
    if(thang==7)
    {
        if(ngay <23)
        {
            printf("Cung Cu giai");
        }
        else
        {
            printf("Cung Su tu");
        }
    }
    if(thang==8)
    {
        if(ngay <23)
        {
            printf("Cung Su tu");
        }
        else
        {
            printf("Cung Xu nu");
        }
    }
    if(thang==9)
    {
        if(ngay <23)
        {
            printf("Cung Xu nu");
        }
        else
        {
            printf("Cung Thien binh");
        }
    }
    if(thang==10)
    {
        if(ngay <24)
        {
            printf("Cung Thien binh");
        }
        else
        {
            printf("Cung Bo cap");
        }
    }
    if(thang==11)
    {
        if(ngay <23)
        {
            printf("Cung Bo cap");
        }
        else
        {
            printf("Cung Nhan ma");
        }
    }
    if(thang==12)
    {
        if(ngay <23)
        {
            printf("Cung Nham ma");
        }
        else
        {
            printf("Cung Ma ket");
        }
    }
    }
    else
    {
        printf("Vui long nhap lai.");
    }
    
    return 0;
}
