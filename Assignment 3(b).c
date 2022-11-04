#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int iCount = 0, i,comp;
    char singleLine[225];

        FILE *infile;
       if ((infile = fopen("text.dat","r")) == NULL)
        {
            printf("Error! opening file");
            exit(1);
        }

            while(!feof  (infile))
                {
                    fgets(singleLine, 225, infile);
                    puts (singleLine);
                }
      fclose (infile);

      return 0;
}
