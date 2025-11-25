#include <stdio.h>

// 4 lab 6

float i , r ;

float Volt( float i , float r  );

int main(){

    printf( "======================== \n") ;

    printf( "Enter Current (A) >> ");
    scanf( "%f" , &i );

    printf( "Enter Resistance (Ohm) >> ");
    scanf( "%f" , &r );

    printf( " -> Voltage = %.4f V \n" , Volt( i,r ) ) ;

    printf( "======================== \n") ;

    return 0 ;

}

float Volt( float i , float r  ){

    float ans = i*r ;

    return ans ;
}