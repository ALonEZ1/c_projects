#include <stdio.h>

int main(){

    char g ;

    printf( "Enter Gender >> ") ;
    scanf( "%c" , &g );

    switch ( g ){

        case 'M' : printf( "Male" ); break;

        case 'm' : printf( "Male" ); break;
        
        case 'W' : printf( "Female"); break;

        case 'w' : printf( "Female" ); break;
    
    default:

        printf("Invalid Value");
    }

}