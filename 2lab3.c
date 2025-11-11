#include <stdio.h>


// หา BMI
// m/h^2

int main(){

    float m ; // ค่ามวล
    float h ; // ค่าสูง

    // st:

    printf( "Enter Mass (kg) >> ");
    scanf( "%f" , &m );

    printf( "Enter Hight (cm) >> ");
    scanf( "%f" , &h );

    h = h/100 ;

    float bmi = m/(h*h)  ; // สูตร

    printf( "\tMass = %.0f kg \n\tHigh = %.0f cm \nBMI = %.2f" , m , h*100 ,bmi ) ;

    
    printf("\n>> ") ;

    if( bmi >= 30){

        printf("Obesity Class") ;
    }

    else if( bmi >= 25){

        printf("Overweight") ;
    }

    else if( bmi >= 18.5){

        printf("Normal Weight") ;
    }

    else printf("Underweight") ;

    printf("\n=======================================\n");

    // goto st;

    return 0 ;

}