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
    struct node* next,*prev;
} node;

typedef struct list
{
    node* head,*tail;
} list;

void start(list* L);

int push_back(list* L, char* title_new, char* staging_new, char* type_new, char* music_new, int year_of_production_new, int time_new);
void loaddb(list* L, char* title_new, char* staging_new, char* type_new, char* music_new, int year_of_production_new, int time_new);

void print_list(list* L);

void insertdata(char* title_new, char* staging_new, char* type_new, char* music_new, int* year_of_production_new, int* time_new);

int print_wanteds(list* L, char* wanted);

void savedb(list* L);


int main()
{
    list dvds;
    start(&dvds);
    char* title_new = malloc(sizeof(char) * 100);
    char* staging_new = malloc(sizeof(char) * 100);
    char* type_new = malloc(sizeof(char) * 100);
    char* music_new = malloc(sizeof(char) * 100);
    int year_of_production_new = 0;
    int time_new = 0;



    int user_selection;
    char* wanted = malloc(sizeof(char) * 100);
   
    
    while(1){
    menu();

    

    scanf("%d", &user_selection);



    switch (user_selection)
    {
    case 1:


        insertdata(title_new, staging_new, type_new, music_new, &year_of_production_new, &time_new);

        int test = push_back(&dvds, title_new, staging_new, type_new, music_new, year_of_production_new, time_new);
        if (test) printf("OK!!! CREATED\n");
        else printf("ERROR\n");
        

        break;


    case 2:
        
        print_list(&dvds);
        break;



    case 3:
        printf("INSERT WANTED TITLE\n");
        scanf("%s", wanted);
        print_wanteds(&dvds,wanted);
        if (!print_wanteds(&dvds, wanted)) printf("TABLE DOESNT HAVE THE TITLES");


        break;

    case 4:
        savedb(&dvds);
        break;




    default:
        printf("d*\n");
        break;

    }


  
}
    
        
    }


void insertdata(char* title_new, char* staging_new, char* type_new, char* music_new, int* year_of_production_new, int* time_new) 
{
    printf("Title: ");
    scanf("%s",title_new);
    printf("Direction: ");
    scanf("%s", staging_new);
    printf("Type: ");
    scanf("%s", type_new);
    printf("Music: ");
    scanf("%s", music_new);
    printf("Year of productions : ");
    scanf("%d", year_of_production_new);
    printf("Time in minutes: ");
    scanf("%d", time_new);

}




void menu() {

    printf("MENU:\n");
    printf("(1)DODAJ POZYCJEA\n");
    printf("(2)WYŚWIETL WSZYSTKIE POZCYJE\n");
    printf("(3)WYSZUKAJ POZYCJEC\n");
    printf("(4)Prawidlowe zamkniecie programu\n");
    printf("\n");
    printf("Wybierz numer odpowiadajacy oczzekiwanej operacji...\n");
}

void start(list* L)
{
    L->head = NULL;
}

int push_back(list* L, char* title_new, char* staging_new, char* type_new, char* music_new, int year_of_production_new, int time_new)
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
        L->tail = new_node;
        L->tail->prev = NULL;

    }
    else
    {
        new_node->prev = L->tail;
        new_node->next = NULL;
        L->tail->next = new_node;
            L->tail = new_node;
    }
    return 1;


}

void print_list(list* L)
{
    node* traverse = L->head;
    printf("Title:  Staging:  Type:  Music:  Year of production:  Time: \n");
    while (traverse != NULL)
    {
      
        
         printf("%s %s %s %s %d %d", traverse->data->title, traverse->data->staging, traverse->data->type, traverse->data->music, traverse->data->time, traverse->data->year_of_production);
            printf("\n");
            traverse = traverse->next;
        
        

 
    }
}

int print_wanteds(list* L,char* wanted)
{
    node* traverse = L->head;\
    printf("Title:  Staging:  Type:  Music:  Year of production:  Time: \n");
    while (traverse != NULL)
    {
        char* suspect = traverse->data->title;
        
        if (strcmp(suspect,wanted) ==0)
        {
            printf("%s %s %s %s %d %d", traverse->data->title, traverse->data->staging, traverse->data->type, traverse->data->music, traverse->data->time, traverse->data->year_of_production);
            printf("\n");
            return 1;
        }
        
       

        
        traverse = traverse->next;

    }
    return 0;
}

void savedb(list* L)
{
    node* traverse = L->head;

    FILE* file;
    file = fopen("db.txt", "w");
  
        while (traverse != NULL)
        {
            fprintf(file,"%s\n%s\n%s\n%s\n%d\n%d\n", traverse->data->title, traverse->data->staging, traverse->data->type, traverse->data->music, traverse->data->time, traverse->data->year_of_production);
            traverse = traverse->next;
        }
        exit(1);
        fclose(file);
        
}
   
void loaddb(list* L, char* title_new, char* staging_new, char* type_new, char* music_new, int year_of_production_new, int time_new)
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
        L->tail = new_node;
        L->tail->prev = NULL;

    }
    else
    {
        new_node->prev = L->tail;
        new_node->next = NULL;
        L->tail->next = new_node;
        L->tail = new_node;
    }
    
}







