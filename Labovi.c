// 1. zadatak
/* 
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#define MAX 1024
#define ERROR -1

int ReadRows(const char* filename);

typedef struct {
	char* ime;
	char* prezime;
	int bodovi;
}listastudenata;

typedef struct llist {
	listastudenata* st;
	struct llist* next;
}list;

listastudenata* unos(const char* filename, int numberOfRows, list* studenti)
{
	int i = 0;
	FILE* fp = NULL;
	fp = fopen(filename, "r");
	list* s = studenti;

	listastudenata* list = malloc(sizeof(listastudenata));

	//for (i = 0; i < numberOfRows; i++)
	//{
	fgets(s->st->ime, sizeof(s->st->ime), fp);
	//}
	printf("%s", s->st->ime);

}

int main()
{
	int numberOfRows = 0;

	numberOfRows = ReadRows("dat.txt");
	printf("Broj redova u datoteci je %d\n", numberOfRows);
	//unos("dat.txt", numberOfRows, );

	return 0;
}

int ReadRows(const char* filename)
{
	int numberOfRows = 0;
	FILE* fp = NULL;
	char buffer[MAX] = { '\0' };

	fp = fopen(filename, "r");
	if (!fp)
	{
		return ERROR;
	}
	while (!feof(fp))
	{
		fgets(buffer, MAX, fp);
		numberOfRows++;
	}
	fclose(fp);
	return numberOfRows;
}*/

// 2. zadatak
/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 50

// Definicija strukture osobe
struct _person;
typedef struct _person* position;
typedef struct _person {
    char name[MAX];
    char lastName[MAX];
    int birthYear;
    position next;
} Person;

// Deklaracije funkcija
position CreatePerson(char* name, char* lastName, int birthYear);
int PrependList(position head, char* name, char* lastName, int birthYear);
int AppendList(position head, char* name, char* lastName, int birthYear);
int PrintList(position first);
position FindLast(position head);
position FindPerson(position first, char* lastName);
int Delete(position head, char* lastName);
position FindPrev(position head, char* lastName);

int main() {
    // Inicijalizacija praznog head čvora
    Person head = { .name = "", .lastName = "", .birthYear = 0, .next = NULL };

    // Dodavanje elemenata na kraj liste
    AppendList(&head, "Ante", "Antic", 2003);
    AppendList(&head, "Borna", "Boric", 2004);

    // Ispis liste
    PrintList(&head);

    // Dodavanje elementa na početak liste
    PrependList(&head, "Cvita", "Cvitic", 2002);
    PrintList(&head);

    // Brisanje elementa iz liste prema prezimenu
    Delete(&head, "Boric");
    PrintList(&head);

    return 0;
}

// Funkcija za kreiranje nove osobe
position CreatePerson(char* name, char* lastName, int birthYear) {
    position newPerson = (position)malloc(sizeof(Person));
    if (!newPerson) {
        printf("Memory allocation failed.\n");
        return NULL;
    }

    strcpy(newPerson->name, name);
    strcpy(newPerson->lastName, lastName);
    newPerson->birthYear = birthYear;
    newPerson->next = NULL;

    return newPerson;
}

// Funkcija za dodavanje osobe na početak liste
int PrependList(position head, char* name, char* lastName, int birthYear) {
    position newPerson = CreatePerson(name, lastName, birthYear);
    if (newPerson == NULL) {
        return -1;
    }

    newPerson->next = head->next;
    head->next = newPerson;

    return EXIT_SUCCESS;
}

// Funkcija za dodavanje osobe na kraj liste
int AppendList(position head, char* name, char* lastName, int birthYear) {
    position newPerson = CreatePerson(name, lastName, birthYear);
    if (newPerson == NULL) {
        return -1;
    }

    position last = FindLast(head);
    last->next = newPerson;

    return EXIT_SUCCESS;
}

// Funkcija za pronalaženje zadnjeg elementa u listi
position FindLast(position head) {
    position temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    return temp;
}

// Funkcija za ispis liste
int PrintList(position first) {
    position temp = first->next;  // Preskačemo head čvor
    while (temp != NULL) {
        printf("%s %s %d\n", temp->name, temp->lastName, temp->birthYear);
        temp = temp->next;
    }
    printf("\n");  // Novi redak nakon ispisa liste
    return EXIT_SUCCESS;
}

// Funkcija za pronalaženje osobe prema prezimenu
position FindPerson(position first, char* lastName) {
    position temp = first->next;
    while (temp != NULL) {
        if (strcmp(temp->lastName, lastName) == 0) {
            return temp;
        }
        temp = temp->next;
    }
    return NULL;
}

// Funkcija za pronalaženje prethodnog elementa u odnosu na traženo prezime
position FindPrev(position head, char* lastName) {
    position temp = head;
    while (temp->next != NULL && strcmp(temp->next->lastName, lastName) != 0) {
        temp = temp->next;
    }
    return temp->next ? temp : NULL;
}

// Funkcija za brisanje osobe prema prezimenu
int Delete(position head, char* lastName) {
    position prev = FindPrev(head, lastName);
    if (prev == NULL) {
        printf("Person with last name %s not found.\n", lastName);
        return -1;
    }

    position toDelete = prev->next;
    prev->next = toDelete->next;
    free(toDelete);

    return EXIT_SUCCESS;
}*/


// 3. zadatak



// 4. zadatak



// 5. zadatak



// 6. zadatak



// 7. zadatak



// 8. zadatak



// 9. zadatak



// 10. zadatak



// 11. zadatak

