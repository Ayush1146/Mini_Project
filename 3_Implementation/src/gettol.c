#include "header.h"

float gettol(char c){

switch(c) {

     case 'N':
          return 1.0;
   
     case 'R':
          return 2.0;
   
     case 'G':
          return 0.5;
   
     case 'E':
          return 0.25;
   
     case 'V':
          return 0.1;
   
     case 'A':
          return 0.05;

     case 'C':
          return 5.0;
     case 'S':
          return 10.0;
     case 'X':
          return 20.0;
   

}

}
