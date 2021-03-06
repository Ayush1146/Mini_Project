#include "operations.h"
#include<stdio.h>
#include<stdlib.h>
#include<math.h>



typedef struct{
     int b1;
     int b2;
     int b3;   
     int b4;
     int b5;
}value;


// main program begins
int main(){
// structure user defined data type char to store input of colour band     
struct color{
	char c[5];
};

typedef struct color band;   // declaration of variable of structure
band *sptr;

value num;   // declaration of variable of structure

int t,res,i = 0;

printf("Enter the type of resistor:\n");
scanf("%d",&t);

sptr = (band*) calloc (t,sizeof(band)); // Dynamic memory allocation

float (*fun_ptr_arr[])(char) = {getmul,gettol}; // function pointer array 

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

  while(t--){

 scanf("%1s", &sptr->c[i]);
 i++;
  }  

num.b1 = getcode(sptr->c[0]); // getcode function is called 
num.b2 = getcode(sptr->c[1]); // getcode function is called 
num.b3=(*fun_ptr_arr[0])(sptr->c[2]); // calling getmul function through function pointer array
num.b4=(*fun_ptr_arr[1])(sptr->c[3]); // calling gettol function through function pointer array

res = ((10*num.b1) + num.b2 )*num.b3; // logic for calculating resistance
printf("Resistance of given resistor is: \n"); // prints resistance
printf("%d Ohms\n", res);
printf("Tolerance = +-%d percent\n", num.b4);  // prints tolerance
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




while(t--){
 
 scanf("%1s", &sptr->c[i]); // function pointer array 
 i++;
}
 
 
num.b1 = getcode(sptr->c[0]); // getcode function is called 
num.b2 = getcode(sptr->c[1]); // getcode function is called 
num.b3 = getcode(sptr->c[2]); // getcode function is called 
num.b4 = (*fun_ptr_arr[0])(sptr->c[3]); // calling getmul function through function pointer array
num.b5 = (*fun_ptr_arr[1])(sptr->c[4]); // calling gettol function through function pointer array


res = ((100*num.b1) + (num.b2*10) + num.b3)*num.b4;  // logic for calculating resistance
printf("Resistance of given resistor is: \n");
printf("%d Ohms\n", res);
printf("Tolerance = +-%d percent\n", num.b5);
}

else
    printf("Support Not available yet");

    free(sptr); // free the dynamically allocated memory
}
