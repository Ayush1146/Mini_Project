#include "operations.h"
#include<math.h>

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
   
}



}

float getmul(char c){


switch(c) {

 case 'B':
          return 1.0;
   
     case 'N':
          return 10.0;
   
     case 'R':
          return 100.0;
   
     case 'O':
          return 1000.0;
   
     case 'Y':
          return 10000.0;
   
     case 'G':
          return 100000.0;
   
     case 'E':
          return 1000000.0;
   
     case 'V':
          return 10000000.0;
     
	 case 'C':
		return 0.1;
     
	 case 'S':
  		  return 0.01;
  
  
}

}

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
