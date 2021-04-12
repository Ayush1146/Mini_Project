#include <res_header.h>

int getcode(char c){

switch(c) {

 case 'B':
          return 0;
   
     case 'N':
          return 1;
   
     case 'R':
          return 2;
   
     case 'O':
          return 3;
   
     case 'Y':
          return 4;
   
     case 'G':
          return 5;
   
     case 'E':
          return 6;
   
     case 'V':
          return 7;
   
     case 'A':
          return 8;
   
     case 'W':
          return 9;
    
    default :
         printf("Invalid input \n" );
   }

}


float getmul(char c){


switch(c) {

 case 'B':
          return 1;
   
     case 'N':
          return 10;
   
     case 'R':
          return 100;
   
     case 'O':
          return 1000;
   
     case 'Y':
          return 10000;
   
     case 'G':
          return 100000;
   
     case 'E':
          return 10*6;
   
     case 'V':
          return 10*7;
     case 'C':
        return 0.1;
     case 'S':
     return 0.01;
  
     default :
         printf("Invalid input \n" );
   }

}
float gettol(char c){



switch(c) {


   
     case 'N':
          return 1;
   
     case 'R':
          return 2;
   
   
     case 'G':
          return 0.5;
   
     case 'E':
          return 0.25;
   
     case 'V':
          return 0.1;
   
     case 'A':
          return 0.05;

     case 'C':
        return 5;
     case 'S':
        return 10;
     case 'X':
        return 20;
     default :
         printf("Invalid input \n" );

}

}




