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

/* #define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 50

struct _struct;
typedef struct _person* position;
typedef struct _person
{
	//ime
	char name[MAX];
	char lastName[MAX];
	int birthYear;

	position next;
}Person;

position CreatePerson(char* name, char* lastName, int birthYear);
int PrependList(position head, char* name, char* lastname, int birthYear);
int PrintList(position first);
int AppendList(position head, char* name, char* lastName, int birthYear);
position FindLast(position head);
position FindPerson(position first, char* lastName);
int Delete(position head, char*);
position FindPrev(position head, char* name);

int main()
{
	Person head =
	{
		.name = {0},
		.lastName = {0},
		.birthYear = {0},
		.next = NULL
	};

	return 0;
}

position CreatePerson(char* name, char* lastName, int birthYear)
{
	position newPerson = NULL;
	newPerson = (position)malloc(sizeof(Person));
	if (!newPerson)
	{
		printf("Bad allocation");
		return NULL;
	}

	strcpy(newPerson->name, name);
	strcpy(newPerson->lastName, lastName);
	newPerson->birthYear = birthYear;
}

int PrependList(position head, char* name, char* lastname, int birthYear)
{
	position newPerson = NULL;
	newPerson = CreatePerson(name, lastname, birthYear);
	if (newPerson == NULL)
	{
		printf("greska");
		return -1;
	}
	newPerson->next = head->next;
	head->next = newPerson;
	return EXIT_SUCCESS;
}

int PrintList(position first)
{
	position temp = NULL;
	temp = first;
	while (temp != NULL)
	{
		printf("%s %s %d", temp->name, temp->lastName, temp->birthYear);
		temp = temp->next;
	}
	return EXIT_SUCCESS;
}

int AppendList(position head, char* name, char* lastName, int birthYear)
{
	position newPerson = NULL;
	position last = NULL;

	newPerson = CreatePerson(name, lastName, birthYear);
	if (newPerson == NULL)
	{
		printf("Failed");
		return -1;
	}

	last = FindLast(head);
	last->next = newPerson;
	newPerson->next = last->next;
	last->next = newPerson;

	return EXIT_SUCCESS;
}

position FindLast(position head)
{
	position last = NULL;
	last = head;
	while (last->next != NULL)
	{
		last = last->next;
	}
	return last;
}

position FindPerson(position first, char* lastName)
{
	position temp = NULL;

	temp = first;
	while (temp)
	{
		if (strcmp(lastName, temp->lastName) == 0)
		{
			return temp;
		}
		temp = temp->next;
	}

	return NULL;
}

int Delete(position head, char* name)
{
	position prev = NULL;
	position toDelete = NULL;

	prev = FindPrev(head, name);

	toDelete = prev->next;
	prev->next = toDelete->next;

	return EXIT_SUCCESS;
}

position FindPrev(position head, char* name)
{
	position temp = head;

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

