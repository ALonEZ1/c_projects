#include <stdio.h>

// หาพื้นที่ สามเหลี่ยม
// 1/2 * Base * Hight

int main( void){

    float b ; // ค่าฐาน
    float h ; // ค่าสูง

    printf( "Enter Base >> ");
    scanf( "%f" , &b );

    printf( "Enter Hight >> ");
    scanf( "%f" , &h );

    float A = b*h/2 ; // สูตร

    printf( "Base = %.2f \nHigh = %.2f \nArea = %.2f" , b , h ,A ) ;

}