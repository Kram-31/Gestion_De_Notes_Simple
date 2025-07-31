📝 Gestionnaire de Notes Simple 📝
Bienvenue sur le Gestionnaire de Notes Simple ! Ce projet est une application console écrite en C, conçue pour vous aider à organiser et gérer vos notes de manière efficace et intuitive.

✨ Fonctionnalités
Cette application vous permet de :

Créer de nouvelles notes : Saisissez un titre et un contenu pour vos notes.

Afficher toutes les notes : Visualisez la liste complète de vos notes avec leurs identifiants, titres et contenus.

Modifier une note existante : Mettez à jour le titre ou le contenu d'une note spécifique en utilisant son identifiant.

Interface utilisateur simple : Un menu interactif en ligne de commande pour une navigation facile.

🚀 Comment l'utiliser
Prérequis
Pour compiler et exécuter ce projet, vous aurez besoin des éléments suivants installés sur votre système :

make : Un utilitaire pour automatiser la compilation.

Un compilateur C (par exemple, gcc ou clang).

Compilation
Clonez le dépôt (ou téléchargez les fichiers si vous n'utilisez pas Git) :

git clone https://github.com/Kram-31/gestion-de-notes-simple.git # Remplacez par l'URL de votre dépôt
cd gestion-de-notes-simple

Compilez le projet en utilisant make :

make

Cela créera un répertoire build/ contenant les fichiers objets et l'exécutable Prog à la racine du projet.

Exécution
Une fois compilée, vous pouvez lancer l'application :

./Prog

Vous serez accueilli par un menu d'options pour interagir avec le gestionnaire de notes.

Nettoyage
Le Makefile inclut plusieurs commandes pour nettoyer les fichiers générés :

make clean : Supprime tous les fichiers objets (.o) et le répertoire build/.

make clean

make fclean : Supprime tous les fichiers générés par la compilation, y compris les fichiers objets, le répertoire build/ et l'exécutable Prog.

make fclean

make re : Exécute fclean puis all, ce qui nettoie complètement le projet et le recompile.

make re

📂 Structure du Projet
src/ : Contient les fichiers source .c de l'application (main.c, note.c).

include/ : Contient les fichiers d'en-tête .h (note.h) avec les définitions de structures et les prototypes de fonctions.

build/ : Répertoire où les fichiers objets (.o) sont placés lors de la compilation.

Makefile : Le fichier de construction pour compiler le projet.

Prog : L'exécutable généré après la compilation.

📸 Aperçu
<img width="1023" height="79" alt="image" src="https://github.com/user-attachments/assets/61417d13-7d58-4f80-ba35-118d4bf0872d" />

