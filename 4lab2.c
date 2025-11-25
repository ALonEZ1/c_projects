#include <stdio.h>

void Tri_A( int b , int h  );

int main(){

    printf( "======================== \n") ;

    Tri_A( 32 , 97);

    Tri_A( 69 , 67);

    printf( "======================== \n") ;

    return 0 ;

}

void Tri_A( int b , int h  ){

    float ans = 0.5*b*h ;

    printf( "Area = %.2f \n" , ans ) ;
}