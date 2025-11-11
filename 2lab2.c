#include <stdio.h>

int main(){

    int s ;

    // st:

    printf( "\nWhat is your score?? >> " ) ;
    scanf( "%d" , &s ) ;


    if( s < 0 || s > 100){

        printf( "Your Score is not allow!! ( 0-100 ) " );

        //goto st;

        return 0 ;

    }
    
    printf( "Your Grade is >> " );

    if( s >= 80 ){

       printf("A") ;
    
    } 
    
    else if( s >= 70 ){

       printf("B") ;
    
    } 

    else if( s >= 60 ){

       printf("C") ;
    
    } 

    else if( s >= 50 ){

       printf("D") ;
    
    } 

    else printf("F") ;

    printf( " (%d)" , s ) ;

    //goto st;

    return 0;
    
}