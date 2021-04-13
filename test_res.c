#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int getcode(char c);
 

 // declared function for function pointer array
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

// declared function for function pointer array
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

// structure user defined data type char to store input of colour band
typedef struct{
	
	char c1;
	char c2;
	char c3;
	char c4;
	char c5;
}color;
// structure user defined data type int to store value of colour from band
typedef struct{
     int b1;
     int b2;
     int b3;   
     int b4;
     int b5;
}value;


// main program begins
int main(){

color band; // declaration of variable of structure
value num;   // declaration of variable of structure

int t,res;
int *color;
printf("Enter the type of resistor:\n");
scanf("%d",&t);

if(t==4){
printf("Type down colors of bands:\n");
   printf( "\tFor Black-------------------> B\n" );
   printf( "\tFor Brown-------------------> N\n" );
   printf( "\tFor Red---------------------> R\n" );
   printf( "\tFor Orange------------------> O\n" );
   printf( "\tFor Yellow------------------> Y\n" );
   printf( "\tFor Green-------------------> G\n" );
   printf( "\tFor Blue--------------------> E\n" );
   printf( "\tFor Violet------------------> V\n" );
   printf( "\tFor Gray--------------------> A\n" );
   printf( "\tFor White-------------------> W\n" );
   printf( "\tFor Gold--------------------> C\n" );
   printf( "\tFor Silver------------------> S\n" );
   printf( "\tFor None--------------------> X\n" );

color = (float*)calloc(5, sizeof(char));


scanf("%s",&band.c1);
scanf("%s",&band.c2);
scanf("%s",&band.c3);
scanf("%s",&band.c4);


float (*fun_ptr_arr[])(char) = {getmul,gettol}; // function pointer array 
 
num.b1 = getcode(band.c1);
num.b2 = getcode(band.c2);
num.b3=(*fun_ptr_arr[0])(band.c3);
num.b4=(*fun_ptr_arr[1])(band.c4);

res = ((10*num.b1) + num.b2 )*num.b3; // logic for calculating resistance
printf("Resistance of given resistor is: \n");
printf("%d Ohms\n", res);
printf("Tolerance = +-%d percent\n", num.b4);
}

else if(t==5){
printf("Type down colors of bands\n");
   printf( "\tFor Black-------------------> B\n" );
   printf( "\tFor Brown-------------------> N\n" );
   printf( "\tFor Red---------------------> R\n" );
   printf( "\tFor Orange------------------> O\n" );
   printf( "\tFor Yellow------------------> Y\n" );
   printf( "\tFor Green-------------------> G\n" );
   printf( "\tFor Blue--------------------> E\n" );
   printf( "\tFor Violet------------------> V\n" );
   printf( "\tFor Gray--------------------> A\n" );
   printf( "\tFor White-------------------> W\n" );
   printf( "\tFor Gold--------------------> C\n" );
   printf( "\tFor Silver------------------> S\n" );
   printf( "\tFor None--------------------> X\n" );


scanf("%s",&band.c1);
scanf("%s",&band.c2);
scanf("%s",&band.c3);
scanf("%s",&band.c4);
scanf("%s",&band.c5);

float (*fun_ptr_arr[])(char) = {getmul,gettol};    // function pointer array 
 
num.b1 = getcode(band.c1);
num.b2 = getcode(band.c2);
num.b3 = getcode(band.c3);
num.b4=(*fun_ptr_arr[0])(band.c4);        
num.b5=(*fun_ptr_arr[1])(band.c5);


res = ((100*num.b1) + (num.b2*10) + num.b3)*num.b4;  // logic for calculating resistance
printf("Resistance of given resistor is: \n");
printf("%d\n", res);
printf("Tolerance = +-%d percent\n", num.b5);
}

else
    printf("Support Not available yet");
}

// function for getting value from colour code
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






