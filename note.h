#ifndef NOTE_H
#define NOTE_H

#include <stdlib.h>
#include <string.h>

#define MAX_TITRE 100
#define MAX_CONTENU 1000
#define MAX_NOTES 100

typedef struct {
  int id;
  char Titre[MAX_TITRE];
  char Contenu[MAX_CONTENU];
} Note;

void Afficher_Note(Note notes[], int nombreDeNotes);
void Cree_Note(Note notes[], int *nombreDeNotes);
void Modifier_Note(Note notes[], int nombreDeNotes);

#endif
