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
    printf("7. Quitter\n");
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
    case 7:
      printf("Au revoir !\n");
      break;
    default:
      printf("Option invalide. Veuillez réessayer.\n");
    }
  } while (choix !=
           7); 
  return 0; 
}
