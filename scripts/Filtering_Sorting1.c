#include <stdio.h>
int main(int argc, char **argv){
int count, total, number; float average;
FILE *infile = fopen("input.dat","r");
for (count = total = 0; fscanf(infile,"%d",&number) != EOF;){
if (number == 0)
continue;
count++; total += number;
}
average = (float)total/(float)count;
printf("The average is: %f\n", average);
fclose(infile);
return 1;
}