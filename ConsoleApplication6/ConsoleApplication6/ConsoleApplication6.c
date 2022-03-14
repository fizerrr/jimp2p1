#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 10

void menu();


typedef struct dvd {	
	char title[MAX]; 
	char staging[MAX];
	char type[MAX];
	int year_of_production;
	char music[MAX];
	int time;
}dvd;

typedef struct node {
    dvd *data;
    struct node* next;
} node;

typedef struct list
{
    node* head;
} list;

void start(list* L)
{
    L->head = NULL;
}

int push_back(list* L, char* title_new, char* staging_new, char* type_new, char* music_new, int year_of_production_new,int time_new)
{
    node* new_node = malloc(sizeof(node));
    dvd* nowy = malloc(sizeof(dvd));
    if (!new_node || !nowy)
    {
        free(new_node);
        free(nowy);
        return 0;
    }

    strcpy(nowy->title, title_new);
    strcpy(nowy->staging, staging_new);
    strcpy(nowy->type, type_new);
    strcpy(nowy->music, music_new);
    nowy->year_of_production = year_of_production_new;
    nowy->time = time_new;


    new_node->data = nowy;

    if (L->head == NULL)
    {
        L->head = new_node;
        L->head->next = NULL;

    }
    else
    {
        new_node->next = NULL;
    }
    return 1;


}

void print_list(list* L)
{
    node* traverse = L->head;
    while (traverse != NULL)
    {
        printf("%s %s %s %s %d %d", traverse->data->title, traverse->data->staging, traverse->data->type, traverse->data->music, traverse->data->time, traverse->data->year_of_production);
        printf("\n");
        traverse = traverse->next;

    }
}


int main()
{
    list dvds;
    start(&dvds);
    char* t = malloc(sizeof(char)*100);
    char* a = malloc(sizeof(char) * 100);
    char* f = malloc(sizeof(char) * 100);
    char* g = malloc(sizeof(char) * 100);
    t = "s";
    a = "b";
    f = "f";
    g = "d";
    
    int test = push_back(&dvds, t,a, f, g, 1, 2);


    if (test) {

        print_list(&dvds);

    }
    else printf("xd");

        return 0;





    /*int user_selection;
   
    
    while(1){
    menu();

    

    scanf("%d", &user_selection);



    switch (user_selection)
    {
    case 1:
        

        break;


    case 2:
       

        break;



    case 3:
        


        break;

    default:
        printf("d*\n");
        break;

    }



}*/
        
    }







void menu() {

    printf("MENU:\n");
    printf("(1)DODAJ POZYCJEA\n");
    printf("(2)WYŚWIETL WSZYSTKIE POZCYJE\n");
    printf("(3)WYSZUKAJ POZYCJEC\n");
    printf("\n");
    printf("Wybierz numer odpowiadajacy oczzekiwanej operacji...\n");
}
