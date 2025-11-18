#include <stdio.h>

int main(){

    int a = 697 ; // แม่ที่...

    int b = 2 ; // เริ่มต้น

    int c = 24 ; // สิ้นสุด

    printf("============================== \n") ;

    printf("Table -> %d \n\n" , a) ;

    while ( b < c +1 ){

        printf("%d x %d = %d \n", a , b , a*b ) ;
        
        b += 1 ;
    }

    printf("==============================") ;
   
}