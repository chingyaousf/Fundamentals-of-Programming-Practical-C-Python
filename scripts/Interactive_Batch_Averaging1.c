#include <stdio.h>
/// @brief 
/// @param argc 
/// @param argv 
/// @return 
int main(int argc, char **argv){
//declare variables
int count, total, number;
//prompt user for a number, then read numbers, one by one until we get a letter
printf("Enter a number:");
for (count = total = 0; scanf("%d",&number); count++){
total += number;
printf("Enter another number (or any letter to end):");
}
//compute then print the average as a float
float average = (float)total/(float)count;
printf("The average is: %f\n", average);
return 1;
}