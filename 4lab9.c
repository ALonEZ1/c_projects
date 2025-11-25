#include <stdio.h>

// 4 lab 9
// การบ้าน หาภาษี มูลค่าเพิ่ม 

void Vat( float a , float b  ) ;

int main(){

    float a = 120 ; // ราคาของ

    float b = 7 ; // % Vat

    printf("============================== \n") ;

    printf( "Enter Product Price -> ") ;

    scanf( "%f" , &a );

    printf( "Enter Percent Vat -> ") ;

    scanf( "%f" , &b );

    b = b/100 ;

    Vat( a , b ) ;
    
   
}

void Vat( float a , float b ){

    float vat = a*b ;

    float net = a+vat ;

    printf("============================== \n") ;

    printf("Product Price -> %.2f Baht \n" , a) ;

    printf("Vat -> %.2f Baht \n" , vat) ;

    printf("Total = %.2f Baht \n" , net) ;

    printf("==============================") ;
}