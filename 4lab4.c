#include <stdio.h>

float r ;

void Cir_A( float r );

int main(){

    printf( "======================== \n") ;

    printf( "Enter Radius >> ");
    scanf( "%f" , &r );

    Cir_A( r );

    printf( "======================== \n") ;

    return 0 ;

}

void Cir_A( float r ){

    float ans = 3.14159*r*r ;

    printf( "Area = %.3f \n" , ans ) ;
}