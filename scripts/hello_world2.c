#include <stdio.h>

int main(int argc, char **argv){
FILE *fp = fopen("HelloWorld.txt","w");
fprintf(fp, "Hello, World!");
fclose(fp);
return 1;
}