/**
 * @file operations.h
 * @author Ayush Sharma(sharmayush009@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2021-04-15
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef __OPERATIONS_H__
#define __OPERATIONS_H__

#include <stdio.h>
#include <stdlib.h>

/**
 * @function to get code for the particular colour of resistor band.
 * 
 * @param c : input from the user i.e. the Letter representing the colour band
 * @return int : Output code value of the colour band
 */
int getcode(char c);

/**
 * @function to get multiplier for the particular colour of resistor band.
 * 
 * @param c : input from the user i.e. the Letter representing the colour band
 * @return float : Output multiplier value of the colour band
 */
float getmul(char c);

/**
 * @function to get tolerance for the particular colour of resistor band.
 * 
 * @param c : input from the user i.e. the Letter representing the colour band
 * @return float : Output tolerance value of the colour band
 */

float gettol(char c);


#endif