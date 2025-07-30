📝 Gestionnaire de Notes en C
✨ Aperçu
Ce projet est une application console simple en C pour gérer vos notes. Conçu pour solidifier vos compétences en programmation C, il couvre les fondamentaux de la gestion de la mémoire, des chaînes de caractères, des structures de données et des opérations de fichiers.

🚀 Fonctionnalités
Ajouter ➕ : Créez de nouvelles notes avec un titre et un contenu.

Lister 📜 : Affichez toutes vos notes par identifiant unique.

Afficher 🔍 : Visualisez le contenu détaillé d'une note spécifique.

Supprimer 🗑️ : Retirez une note de votre liste.

Persistance 💾 : Vos notes sont automatiquement sauvegardées dans notes.txt et rechargées au démarrage.

🛠️ Compilation & Exécution
Prérequis
Un compilateur C (ex: GCC)

make (facultatif)

Construire
Bash

git clone http://github.com/VotreNomDUtilisateur/gestionnaire-notes-c.git
cd gestionnaire-notes-c
gcc -o note_manager main.c note.c note_manager.c -Wall -Wextra -g
Lancer
Bash

./note_manager
💡 Concepts Clés
Ce projet vous fera pratiquer :

struct : Organisation des données de vos notes.

Pointeurs & malloc/free : Gestion dynamique de la mémoire.

Strings sécurisées : Manipulation robuste des textes (strncpy, snprintf).

Fichiers (FILE*) : Sauvegarde et chargement des données.

Modularité : Code organisé en fonctions claires.

Gestion des erreurs : Rendre le programme plus fiable.

🚀 Prochaines étapes
Une fois cette base solide, explorez des améliorations comme :

Notes dynamiques : Utiliser des listes chaînées.

Recherche : Trouver des notes par mot-clé.

Interface utilisateur : Améliorer l'interaction console.

N'hésitez pas à explorer, modifier et améliorer le code ! Votre feedback est le bienvenu.
