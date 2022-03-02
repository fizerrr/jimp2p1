#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct dvd {	
	char * title; 
	char * staging;
	char * type;
	int year_of_production;
	char * music;
	int time;
}dvd;
typedef struct{
    dvd* array;
    size_t used;
    size_t size;

}Array;

//Initial an array
void initArray(Array* a, size_t initialSize);
// Add element to array
void insertArray(Array* a, dvd element);
//UI
void menu();






int main()
{
    Array a;
    dvd dvds;
    int user_selection;


    menu();



    scanf("%d", &user_selection);

    
    

        switch (user_selection)
        {
        case 1:
            printf("1*\n");
           
      

            initArray(&a, 10);

            printf("%s\n", a.array[0].title);
            printf("%s\n", a.array[0].staging);
            printf("%s\n", a.array[0].type);
            printf("%d\n", a.array[0].year_of_production);
            printf("%s\n", a.array[0].music);
            printf("%d\n", a.array[0].time);
            
            
            printf("\n");
            printf("\n");
            printf("\n");

            dvds.title = "nara";
            dvds.music = "nara";
            dvds.staging = "nara";
            dvds.time = 89;
            dvds.type = "nara";
            dvds.year_of_production = 89;

            insertArray(&a, dvds);

            printf("%s\n", a.array[1].title);
            printf("%s\n", a.array[1].staging);
            printf("%s\n", a.array[1].type);
            printf("%d\n", a.array[1].year_of_production);
            printf("%s\n", a.array[1].music);
            printf("%d\n", a.array[1].time);

            break;


        case 2:
            printf("2*\n");
            break;


        case 3:
            printf("3*\n");
            break;

        default:
            printf("d*\n");
            break;

        }



    
	return 0;
}




void insertArray(Array* a, dvd element)
{
    if (a->used == a->size)
    {
        a->size *= 6;
        a->array = (dvd*)realloc(a->array, a->size * sizeof(dvd));
    }

    // Copy title
    a->array[a->used].title = (char*)malloc(strlen(element.title) + 1);
    strcpy(a->array[a->used].title, element.title);

    // Copy staging
    a->array[a->used].staging = (char*)malloc(strlen(element.staging) + 1);
    strcpy(a->array[a->used].staging, element.staging);

    // Copy type
    a->array[a->used].type = (char*)malloc(strlen(element.type) + 1);
    strcpy(a->array[a->used].type, element.type);

    // Copy year_of_production
    a->array[a->used].year_of_production = element.year_of_production;

    // Copy music
    a->array[a->used].music = (char*)malloc(strlen(element.music) + 1);
    strcpy(a->array[a->used].music, element.music);


    // Copy year_of_production
    a->array[a->used].time = element.time;



    a->used++;
}


void initArray(Array* a, size_t initialSize)
{
    // Allocate initial space
    a->array = (dvd*)malloc(initialSize * sizeof(dvd));

    a->used = 0;           // no elements used
    a->size = initialSize; // available nr of elements

    // Initialize all values of the array to 0
    for (unsigned int i = 0; i < initialSize; i++)
    {
        memset(&a->array[i], 0, sizeof(dvd));
    }
}


void menu() {

    printf("MENU:\n");
    printf("(1)DODAJ POZYCJEA\n");
    printf("(2)WYŚWIETL WSZYSTKIE POZCYJE\n");
    printf("(3)WYSZUKAJ POZYCJEC\n");
    printf("\n");
    printf("Wybierz numer odpowiadajacy oczzekiwanej operacji...\n");
}
