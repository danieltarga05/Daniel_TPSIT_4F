#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/wait.h>
#include <stdbool.h>
#define MAX 1000

bool FineProgramma(int conta, char stringa[])
{
    printf("Parola: ");
    scanf("%s", stringa);
    return strcmp(stringa, "fine") == 0;
}

int main(int argc, char *argv[])
{        
    char stringa[MAX], conta_stringa[MAX];
    int p1p0[2], conta_totale = 0;
}