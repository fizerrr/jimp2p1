#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 100
#define file_name "db.txt"

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
    dvd* data;
    struct node* next, * prev;
} node;

typedef struct list
{
    node* head, * tail;
} list;

void start(list* L);

int push_back(list* L, char* title_new, char* staging_new, char* type_new, char* music_new, int year_of_production_new, int time_new);
void loaddb(list* L);

void print_list(list* L);

void insertdata(list* L,char* title_new, char* staging_new, char* type_new, char* music_new, int* year_of_production_new, int* time_new);

int print_wanteds(list* L, char* wanted);


void delete_node(list* L, node* p);

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



    char user_selection;
    char* wanted = malloc(sizeof(char) * 100);

    loaddb(&dvds);
    printf("DATA LOADED FROM FILE...\n");
    while (1) {
        menu();



        scanf("%s", &user_selection);



        switch (user_selection)
        {
        case '1':
            insertdata(&dvds,title_new, staging_new, type_new, music_new, &year_of_production_new, &time_new);
            break;


        case '2':
            print_list(&dvds);
            break;



        case '3':
            printf("INSERT SEARCHED TITLES\n");
            scanf("%s", wanted);
            if (!print_wanteds(&dvds, wanted)) printf("THE RECORDS DON'T EXIST\n");
            break;

        case '4':
            savedb(&dvds);
            break;

    


        default:
            printf("BAD REQUEST\n");
            break;

        }

        

    }


}


void insertdata(list *L,char* title_new, char* staging_new, char* type_new, char* music_new, int* year_of_production_new, int* time_new)
{
    printf("!!!USE _ instead space!!!\n");
    printf("Title: ");
    scanf("%s", title_new);
    printf("Direction: ");
    scanf("%s", staging_new);
    printf("Type: ");
    scanf("%s", type_new);
    printf("Music: ");
    scanf("%s", music_new);
    printf("Year of productions : ");
    scanf("%d", &year_of_production_new);
    printf("Time in minutes: ");
    scanf("%d", &time_new);
    push_back(L, title_new, staging_new, type_new, music_new, year_of_production_new, time_new);


}




void menu() {

    printf("MENU:\n");
    printf("(1)ADD RECORD\n");
    printf("(2)DISPLAY RECORDS\n");
    printf("(3)SEARCH RECORDS\n");
    printf("(4)SAFETY SAVE AND EXIT\n");
    printf("\n");
    printf("TAKE THE OPERATION:\n");
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
    while (traverse != NULL)
    {


        printf("| Title: [%s] | Staging: [%s] | Type: [%s] | Music: [%s] | Year of production: [%d] | Time: [%d minutes] |", traverse->data->title, traverse->data->staging, traverse->data->type, traverse->data->music, traverse->data->year_of_production, traverse->data->time);
        printf("\n");
        traverse = traverse->next;




    }
}

int print_wanteds(list* L, char* wanted)
{
    int test = 0;
    node* traverse = L->head; 
    while (traverse != NULL)
    {
        if (strcmp(wanted, traverse->data->title) == 0)
        {
        printf("| Title: [%s] | Staging: [%s] | Type: [%s] | Music: [%s] | Year of production: [%d] | Time: [%d minutes] |", traverse->data->title, traverse->data->staging, traverse->data->type, traverse->data->music, traverse->data->year_of_production, traverse->data->time);
        printf("\n");
        test++;
        }
        traverse = traverse->next;
    }
    if (test) return 1;
    else return 0;
}

void savedb(list* L)
{
    node* traverse = L->head;

    FILE* file;
    file = fopen(file_name, "w");

    while (traverse != NULL)
    {
        fprintf(file,"%s %s %s %s %d %d", traverse->data->title, traverse->data->staging, traverse->data->type, traverse->data->music, traverse->data->year_of_production, traverse->data->time);
        fprintf(file, "\n");
        traverse = traverse->next;
    }
    fprintf(file, "*");
    exit(1);
    fclose(file);

}

void loaddb(list* L)
{

    char* title_new = malloc(sizeof(char) * 100);
    char* staging_new = malloc(sizeof(char) * 100);
    char* type_new = malloc(sizeof(char) * 100);
    char* music_new = malloc(sizeof(char) * 100);
    int year_of_production_new;
    int time_new;

    FILE* file;
    file = fopen(file_name, "r");


    while (1) // 1 -> true
    {
 

        fscanf(file, "%s ", title_new);
        if (strcmp(title_new, "*") == 0) break;
        fscanf(file, "%s ", staging_new);
        fscanf(file, "%s ", type_new);
        fscanf(file, "%s ", music_new);
        fscanf(file, "%d ", &year_of_production_new);
        fscanf(file, "%d ", &time_new);
        fscanf(file, "\n");
       


        push_back(L, title_new, staging_new, type_new, music_new, year_of_production_new, time_new);

    }
}

