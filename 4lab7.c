#include <stdio.h>

// 4 lab 7
// การบ้าน ค่า BMI

float m , h ;

float Bmi( float m , float h  );

int main(){

    printf( "======================== \n") ;

    printf( "Enter Mass (kg) >> ");
    scanf( "%f" , &m );

    printf( "Enter Hight (cm) >> ");
    scanf( "%f" , &h );

    h = h/100 ;

    printf( " -> BMI = %.2f \n" , Bmi( m,h ) ) ;

    printf( "======================== \n") ;

    return 0 ;

}

float Bmi( float m , float h  ){

   float bmi = m/(h*h) ;

    return bmi ;
}