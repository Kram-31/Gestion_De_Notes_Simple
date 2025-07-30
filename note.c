#include "note.h"
#include <stdio.h>
#include <string.h>
// ft_Cree_Note
void Cree_Note(Note notes[], int *NombreDeNotes) {

  if (*NombreDeNotes >= MAX_NOTES) {
    printf("Impossible de créer plus de notes. La limite est atteinte.\n");
    return;
  }
  printf("\n----Création d'une nouvelle note :----\n ");
  printf("Entrez le titre de la note : (max : %d caractères) : ",
         MAX_TITRE - 1);
  fgets(notes[*NombreDeNotes].Titre, MAX_TITRE, stdin);
  notes[*NombreDeNotes].Titre[strcspn(notes[*NombreDeNotes].Titre, "\n")] =
      '\0';

  printf("\n----Création du contenu de la nouvelle note :----\n ");
  printf("Entrez le contenu de la note : (max : %d caractères) : ",
         MAX_CONTENU - 1);
  fgets(notes[*NombreDeNotes].Contenu, MAX_CONTENU, stdin);
  notes[*NombreDeNotes].Contenu[strcspn(notes[*NombreDeNotes].Contenu, "\n")] =
      '\0';
  notes[*NombreDeNotes].id = (*NombreDeNotes) + 1;
  (*NombreDeNotes)++;
  printf("Note '%s' créée n° (ID: %d).\n", notes[*NombreDeNotes - 1].Titre,
         notes[*NombreDeNotes - 1].id);
}

void Afficher_Note(Note notes[], int NombreDeNotes) {
  if (NombreDeNotes == 0) {
    printf("Aucune notes dispo pour le moment.\n");
    return;
  }
  printf("-----TOUTE VOS NOTES-----\n");
  for (int i = 0; i < NombreDeNotes; i++) {
    printf("%i\n", notes[NombreDeNotes].id);
    printf("%s\n", notes[NombreDeNotes].Titre);
    printf("%s\n", notes[NombreDeNotes].Contenu);
    printf("---------------------------------------\n");
  }
}
