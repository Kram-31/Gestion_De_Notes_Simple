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
  printf("Entrez le titre de la note : (max : %d caractères) : \n",
         MAX_TITRE - 1);
  fgets(notes[*NombreDeNotes].Titre, MAX_TITRE, stdin);
  notes[*NombreDeNotes].Titre[strcspn(notes[*NombreDeNotes].Titre, "\n")] =
      '\0';

  printf("\n----Création du contenu de la nouvelle note :----\n ");
  printf("Entrez le contenu de la note : (max : %d caractères) : \n",
         MAX_CONTENU - 1);
  fgets(notes[*NombreDeNotes].Contenu, MAX_CONTENU, stdin);
  notes[*NombreDeNotes].Contenu[strcspn(notes[*NombreDeNotes].Contenu, "\n")] =
      '\0';
  notes[*NombreDeNotes].id = (*NombreDeNotes) + 1;
  (*NombreDeNotes)++;
  printf("Note '%s' créée n° (ID: %d).\n", notes[*NombreDeNotes - 1].Titre,
         notes[*NombreDeNotes - 1].id);
}

void Modifier_Note(Note notes[], int NombreDeNotes) {
  if (NombreDeNotes == 0) {
    printf("aucune note a modifier.\n");
    return;
  }
  int id_recherche;
  int note_trouvee = -1;

  printf("\n---NOTES DISPONIBLES---\n");
  int i = 0;
  while (i < NombreDeNotes) {
    printf("ID: %d - Titre: %s\n", notes[i].id, notes[i].Titre);
    i++;
  }
  printf("\nEntrez l'id de la note que vous voulez modifier :");
  scanf("%d", &id_recherche);
  i = -1;
  while (i < NombreDeNotes) {
    if (notes[i].id == id_recherche) {
      note_trouvee = i;
      break;
    }
    i++;
  }
  printf("\n ----NOTES ACTUELLE-----\n");
  printf("ID: %d\n", notes[note_trouvee].id);
  printf("Titre: %s\n", notes[note_trouvee].Titre);
  printf("Contenu: %s\n", notes[note_trouvee].Contenu);

  int choix_modification;
  printf("\nQue vous voulez faire ?\n");
  printf("1. Titre \n");
  printf("2. Contenu\n");
  printf("3. Titre et Contenu\n");
  scanf("%d", &choix_modification);

  char nouveau_titre[MAX_TITRE];
  char nouveau_contenu[MAX_CONTENU];
  while (getchar() != '\n' && getchar() != EOF)
    ;
  switch (choix_modification) {
  case 1:
    printf("Nouveau titre (max %d char) :", MAX_TITRE - 1);
    fgets(nouveau_titre, MAX_TITRE, stdin);
    nouveau_titre[strcspn(nouveau_titre, "\n")] = '\0';
    if (strlen(nouveau_titre) > 0) {
      strcpy(notes[note_trouvee].Titre, nouveau_titre);
      printf("Titre modifié\n");
    } else {
      printf("\nfail");
    }
    break;

  case 2:
    printf("Nouveau Contenu (max %d char) :", MAX_CONTENU - 1);
    fgets(nouveau_contenu, MAX_CONTENU, stdin);
    nouveau_contenu[strcspn(nouveau_contenu, "\n")] = '\0';
    if (strlen(nouveau_contenu) > 0) {
      strcpy(notes[note_trouvee].Contenu, nouveau_contenu);
      printf("Contenu modifié\n");
    } else {
      printf("\nfail");
    }
    break;

  default:
    printf("réessaye bouffon\n");
    return;
  }
  printf("\n----NOTE APRES MODIFICATION---\n");
  printf("ID : %d\n", notes[note_trouvee].id);
  printf("Titre: %s\n", notes[note_trouvee].Titre);
  printf("Contenu: %s\n", notes[note_trouvee].Contenu);
  printf("\n---------------------------------------\n");
}

void Afficher_Note(Note notes[], int NombreDeNotes) {
  if (NombreDeNotes == 0) {
    printf("Aucune notes dispo pour le moment.\n");
    return;
  }
  printf("-------------TOUTE VOS NOTES-----------\n");
  for (int i = 0; i < NombreDeNotes; i++) {
    printf("ID :%i\n", notes[i].id);
    printf("Titre : %s\n", notes[i].Titre);
    printf("Contenu : %s\n", notes[i].Contenu);
    printf("---------------------------------------\n");
  }
}
