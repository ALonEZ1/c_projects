#include <stdio.h>

int main(){

    int s ;

    printf( "What is your score?? >> " ) ;
    scanf( "%d" , &s ) ;


    if( s < 0 || s > 100){

        printf( "Your Score is not allow!! ( 0-100 ) " );
    }

    else if( s >= 60 ){

       printf( "> Pass!! ,Score = %d" , s ) ;
    
    } else printf( "> Fail :( ,Score = %d" , s ) ;

    return 0 ;


}