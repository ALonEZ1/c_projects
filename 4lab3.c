#include <stdio.h>

int b , h ;

void Tri_A( int b , int h  );

int main(){

    printf( "======================== \n") ;

    printf( "Enter Base >> ");
    scanf( "%d" , &b );

    printf( "Enter Hight >> ");
    scanf( "%d" , &h );

    Tri_A( b , h);

    printf( "======================== \n") ;

    return 0 ;

}

void Tri_A( int b , int h  ){

    float ans = 0.5*b*h ;

    printf( "Area = %.2f \n" , ans ) ;
}