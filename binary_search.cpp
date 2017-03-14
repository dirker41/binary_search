#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef int int100[100] ;



int binary_search( int100 intar,int first ,int last,int value ) ;







int main()

{
    int100 intar;
    int x = 0 ;
    int i = 0 ;
    for ( i = 0 ; i <=99 ; i ++ )
      intar[i]= 2*i+1 ;
      
    while( x != -1 ) {
      scanf( "%d",&x) ;
      
      if ( binary_search( intar,0 , 99, x ) == -1 ) 
        printf ( "Can not find! \n") ; 
      else 
        printf ( "你找的東西在第%d個位置\n",1 + binary_search( intar,0 , 99, x ) ) ; 
    } // while
      
      
      
      
    for ( i = 1 ; i <=100 ; i ++ ) {
      printf("%d ",intar[i]) ;
      if ( i % 10 == 0 ) 
        printf("\n") ;
    } // for
      
      system("pause") ;
      return 0 ;

}//////end main///////////////////////////////////////////////
//////////////////////////////////////////////////////////////



int binary_search( int100 intar,int first ,int last,int value ) {
    int mid = ( first + last ) / 2 ; 
    
    if ( ( first > last ) || ( last< first ) ) return -1 ; 
    else if ( intar[mid] == value ) return mid ;
    else if( intar[mid] < value ) 
      return binary_search( intar, mid+1, last, value ) ;
    else if( intar[mid] > value )  
      return binary_search( intar, first, mid - 1 , value ) ;
    
    
}////////////////////end/////////////////////////////////////
/////////////////////////////////////////////////////////////
