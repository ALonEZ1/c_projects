#include <stdio.h>

// หา BMI
// m/h^2

int main( void){

    float m ; // ค่ามวล
    float h ; // ค่าสูง

    printf( "Enter Mass (kg) >> ");
    scanf( "%f" , &m );

    printf( "Enter Hight (cm) >> ");
    scanf( "%f" , &h );

    h = h/100 ;

    float bmi = m/(h*h)  ; // สูตร

    printf( "Mass = %.0f kg \nHigh = %.0f cm \nBMI = %.2f" , m , h*100 ,bmi ) ;

}