#include <stdio.h>

// หาพื้นที่ สามเหลี่ยม
// 1/2 * Base * Hight

int main( void){

    int b = 5 ; // ค่าฐาน
    int h = 7 ; // ค่าสูง

    float A = b*h/2 ; // สูตร
    

    // printf( "Base = %d \n" , b ) ;
    // printf( "Hight = %d \n" , h ) ;

    // printf( "Area = %.2f" , A ) ;

    printf( "Base = %d \nHigh = %d \nArea = %.2f" , b , h ,A ) ;

}