#include <stdio.h>
/// @brief 
/// @param argc 
/// @param argv 
/// @return 
int main(int argc, char **argv){
int count, total, number; float average;
FILE *infile = fopen("input.dat","r");
FILE *outfile = fopen("output1.dat","w");
for (count = total = 0; fscanf(infile,"%d",&number) != EOF;){
count++; total += number;
average = (float)total/(float)count;
fprintf(outfile,"%d %f\n",count,average);
}
printf("The average is: %f\n", average);
fclose(infile);
fclose(outfile);
return 1;
}