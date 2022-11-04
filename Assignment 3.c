#include <stdio.h>
#include <stdlib.h>

typedef struct cars
{
    char car_make[50];
    char model[50];
    int year;
    int cc;
    float market_price;
}cars;

int main()
{
    int iCount = 0, i,comp;
    cars car[iCount];

    FILE *fptr;
       if ((fptr = fopen("text.dat","w")) == NULL)
        {
            printf("Error! opening file");
            exit(1);
        }



     printf ("Enter 'STOP' In Car Make to End Program \n");
     for (i = iCount ; i < iCount + 1  ; i++)
     {



          printf("\nCar Make: ");
          scanf("%s",&car[i].car_make);

          comp = strcmp(car[i].car_make,"STOP");

          if (comp == 0)
          {
            strcpy (car[i].car_make,"  ");
            fprintf(fptr,"%s",car[i].car_make);
            break;
          }
          fprintf(fptr,"Car : %s ",car[i].car_make);

          printf("Car Model: ");
          scanf("%s",&car[i].model);
          fprintf(fptr,"%s ",car[i].model);

          printf("Year: ");
          scanf("%d",&car[i].year);
          fprintf(fptr,"Year Model: %d ",car[i].year);

          printf("cc: ");
          scanf("%d",&car[i].cc);
          fprintf(fptr,"Car CC : %d ",car[i].cc);

          printf ("Market Price: ");
          scanf("%f",&car[i].market_price);
          fprintf(fptr,"Market Price: %.2f\n",car[i].market_price);

          iCount ++;



      }

      fclose (fptr);


    return 0;
}
