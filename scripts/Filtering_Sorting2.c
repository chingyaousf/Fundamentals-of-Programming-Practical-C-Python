#include <stdio.h>
#include <stdlib.h>
int main(int argc, char **argv){
int count, total, number;
int *numbers = malloc(0);
FILE *infile = fopen("test.dat","r");
FILE *outfile = fopen("output2.dat","w");
for (count = total = 0; fscanf(infile,"%d",&number) != EOF;){
if (number < 0)
continue;
count++;
numbers = realloc(numbers,sizeof*numbers*count);
numbers[count-1] = number;
}

int *sorted = malloc(sizeof*sorted*count);
int i,j,k;
for (i=0;i<count;i++){
sorted[i] = -1; //set current slow to definite loser
for (j=0;j<count;j++){
if (numbers[j] > sorted[i]){
sorted[i] = numbers[j]; //store the winning value
k = j; //track the index of the winner
}
}
numbers[k] = -1; //remove the winner from further consideration
}
for (i=0;i<count;i++)
fprintf(outfile,"%d\n",sorted[i]);
free(sorted); fclose(infile); fclose(outfile);
return 1;
}