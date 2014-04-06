#include <stdio.h>

int main(int argc, char **argv) 
{
    FILE *fp = fopen("rosalind_dna.txt", "r");
    int A = 0, C = 0, T = 0, G = 0;
    int base;
    while ((base = fgetc(fp)) != EOF) 
    {
        // In ASCII, A = 65, C = 67, T = 84, G = 71
        switch(base)
        {
            case 65:
                A++;
                break;
            case 67:
                C++;
                break;
            case 84:
                T++;
                break;
            case 71:
                G++;
                break;
        }
    }
    printf("%i %i %i %i \n", A, C, G, T);
}
