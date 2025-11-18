#include <stdio.h>

int main(){

    int a = 67 ; // แม่ที่...

    int b = 2 ; // เริ่มต้น

    int c = 24 ; // สิ้นสุด

    printf( "Enter Multiplication Num -> ") ;

    scanf( "%d" , &a );
    
    printf("============================== \n") ;

    printf("Times Table -> %d \n\n" , a) ;

    while ( b <= c ){

        printf("%d x %d = %d \n", a , b , a*b ) ;
        
        b += 1 ;

    }

    printf("==============================") ;
   
}