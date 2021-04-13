/**
 * @file my.c
 * @author Ayush Sharma (sharmayush009@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2021-04-13
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
/**
 * @brief 
 * 
 * @param c 
 * @return int 
 */
int getcode(char c);
float getmul(char c);
float gettol(char c);

/**
 * @brief 
 * 
 * @return int 
 */
int main(){
int t,b1,b2,b3,b4,b5,res;
char c[5];

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


scanf("%s",&c[0]);
scanf("%s",&c[1]);
scanf("%s",&c[2]);
scanf("%s",&c[3]);

b1 = getcode(c[0]);
b2 = getcode(c[1]);
b3 = getmul(c[2]);
b4 = gettol(c[3]);

res = ((10*b1) + b2 )*b3;
printf("Resistance of given resistor is: \n");
printf("%d Ohms\n", res);
printf("Tolerance = %d\n", b4);
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



scanf("%s",&c[0]);
scanf("%s",&c[1]);
scanf("%s",&c[2]);
scanf("%s",&c[3]);
scanf("%s",&c[4]);


b1 = getcode(c[0]);
b2 = getcode(c[1]);
b3 = getmul(c[2]);
b4 = gettol(c[3]);
b5 = gettol(c[4]);

res = ((100*b1) + (b2*10) + b3)*b4;
printf("Resistance of given resistor is: \n");
printf("%d\n", res);
printf("Tolerance = +-%d\n", b5);
}

else
    printf("Support Not available yet");
}


/**
 * @brief 
 * 
 * @param c 
 * @return int 
 */
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
/**
 * @brief 
 * 
 * @param c 
 * @return float 
 */
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


/**
 * @brief 
 * 
 * @param c 
 * @return float 
 */
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
