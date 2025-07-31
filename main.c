#include "note.h"
#include <stdio.h>

Note notes[MAX_NOTES];
int NombreDeNotes = 0;

int main() {
  int choix;

  do {
    printf("\n--- MENU DE GESTION DE NOTES ---\n");
    printf("1. Créer une nouvelle note\n");
    printf("2. Afficher toutes les notes\n");
    printf("3. modifier une note\n");
    printf("4. Quitter\n");
    printf("Choisissez une option : ");

    scanf("%d", &choix);
    while (getchar() != '\n' && getchar() != EOF)
      ;

    switch (choix) {
    case 1:
      Cree_Note(notes, &NombreDeNotes);
      break;
    case 2:
      Afficher_Note(notes, NombreDeNotes);
      break;
    case 3:
      Modifier_Note(notes, NombreDeNotes);
      break;
    case 4:
      printf("Au revoir !\n");
      break;
    default:
      printf("Option invalide bouffon\n");
    }
  } while (choix != 4);
  return 0;
}
