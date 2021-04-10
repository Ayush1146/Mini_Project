#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void    print_codes( void );     /* menu of codes */
double  decode_char( char code );

void main()
{
     char    code1, code2, code3;     /* one code per band */
     double  resistance;
     double  color1, color2, color3;  /* decoded values */
     int     flag;

     /* Print codes and prompt for user input. */
     print_codes();
     printf( "\n\n\tEnter three codes. " );

     /* Read three character codes. */
     code1 = getchar();
     code2 = getchar();
     code3 = getchar();

     /* Decode each character code. */
     color1 = decode_char( code1 );
     color2 = decode_char( code2 );
     color3 = decode_char( code3 );

  
          resistance = ( 10.0 * color1  +  color2 )
                       * pow( 10.0, color3 );
      
      
      
            printf( "\n\n\tResistance in ohms:\t%f\n", resistance );

     
}

/*   This function prints a menu of color codes to guide the user in
     entering input.                                               */

void  print_codes( void )
{
   printf( "\n\n\tThe colored bands are coded as follows:\n\n\n\t" );
   printf( "COLOR\t\t\tCODE\n\t" );
   printf( "-----\t\t\t----\n\n" );
   printf( "\tBlack-------------------> B\n" );
   printf( "\tBrown-------------------> N\n" );
   printf( "\tRed---------------------> R\n" );
   printf( "\tOrange------------------> O\n" );
   printf( "\tYellow------------------> Y\n" );
   printf( "\tGreen-------------------> G\n" );
   printf( "\tBlue--------------------> E\n" );
   printf( "\tViolet------------------> V\n" );
   printf( "\tGray--------------------> A\n" );
   printf( "\tWhite-------------------> W\n" );
}

/*   This function expects a character (color code) and returns a
     double precision floating point number as its value. If the code 
     is not legal, it returns a value that signals this fact.      */

double decode_char( char code )
{
     switch ( code ) {
   
     case 'B':
          return 0.0;
   
     case 'N':
          return 1.0;
   
     case 'R':
          return 2.0;
   
     case 'O':
          return 3.0;
   
     case 'Y':
          return 4.0;
   
     case 'G':
          return 5.0;
   
     case 'E':
          return 6.0;
   
     case 'V':
          return 7.0;
   
     case 'A':
          return 8.0;
   
     case 'W':
          return 9.0;
   
     default:
          return -999.0;     /* illegal code */
 
     }
}