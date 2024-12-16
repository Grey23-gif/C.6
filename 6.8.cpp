
#include <stdio.h>
#include <math.h>

int main()
{
    float tiengoc,lai,thang,tientong;
    printf("Nhap so tien can gui: ");
    scanf("%f",&tiengoc);
    printf("Nhap lai suat thang: ");
    scanf("%f",&lai);
    printf("Nhap so thang gui: ");
    scanf("%f",&thang);
    tientong=tiengoc*pow(1+lai/100,thang);
    printf("Tien lai sau %.0f thang la: %.2f\n",thang,tientong-tiengoc);
    printf("Tong tien ta co sau %.0f thang la: %.2f ",thang,tientong);
    
    
    
    return 0;
}

