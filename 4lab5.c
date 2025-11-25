#include <stdio.h>

float i , r ;

void Volt( float i , float r  );

int main(){

    printf( "======================== \n") ;

    printf( "Enter Current (A) >> ");
    scanf( "%f" , &i );

    printf( "Enter Resistance (Ohm) >> ");
    scanf( "%f" , &r );

    Volt( i , r );

    printf( "======================== \n") ;

    return 0 ;

}

void Volt( float i , float r  ){

    float ans = i*r ;

    printf( " -> Voltage = %.4f V \n" , ans ) ;
}