/*
 * task_1.cpp
 *
 *  Created on: 6 Oct 2012
 *      Author: karsten weber
 */

#include <stdio.h>

#include "TDate.h"
#include "TTime.h"

int main ()
{

TDate D1, D2(3, 10, 2012);
TTime T1, T2(16, 0, 0);


printf("\nClass TDate:");
printf("\nDefault-Constructor with actual Date D1: ");
D1.print();
printf("\nConstructor with Germany's National Holiday's date  D2: ");
D2.print();
printf("\nClass TTime:");
printf("\nDefault-Constructor with actual time T1: ");
T1.print();
printf("\nConstructor with start time of Exercise T2: ");
T2.print();

printf("\n\n ...press any key to close the program...");
getchar();

return 0;
}

