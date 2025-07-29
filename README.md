Gestionnaire de Notes Simple en C
Vue d'ensemble
Ce projet est une application console basique développée en C, permettant de gérer des notes simples. Il a été conçu comme un exercice pratique pour renforcer les fondamentaux de la programmation C, notamment la gestion de la mémoire, les manipulations de chaînes de caractères, les structures de données et les opérations d'entrée/sortie sur fichiers.

Fonctionnalités
Le programme offre les options suivantes :

Ajouter une note : Créez une nouvelle note en saisissant un titre et son contenu.

Lister les notes : Affichez toutes les notes existantes, chacune identifiée par un numéro unique.

Afficher une note : Visualisez le contenu détaillé d'une note spécifique en fournissant son numéro.

Supprimer une note : Retirez une note de la liste en indiquant son numéro.

Sauvegarder et charger : Toutes les notes sont automatiquement sauvegardées dans un fichier texte (notes.txt) et chargées au démarrage du programme.

Concepts C abordés
En travaillant sur ce projet, vous pratiquerez et consoliderez les concepts C suivants :

Structures (struct) : Utilisation pour définir le format d'une note (ID, titre, contenu).

Pointeurs et allocation dynamique de mémoire (malloc, free) : Pour gérer des collections de notes de manière flexible et optimiser l'utilisation de la mémoire.

Manipulation de chaînes de caractères : Utilisation des fonctions sécurisées (strncpy, strncat, snprintf) pour gérer les titres et contenus des notes.

Opérations sur les fichiers (FILE*, fopen, fclose, fprintf, fscanf, fgets) : Pour la persistance des données entre les exécutions du programme.

Modularité des fonctions : Découpage du code en fonctions logiques pour une meilleure organisation et lisibilité.

Gestion des entrées/sorties utilisateur (printf, fgets) : Interaction avec l'utilisateur via la console.

Gestion des erreurs : Implémentation de vérifications pour les échecs d'allocation mémoire, d'ouverture de fichier, etc., afin de rendre le programme plus robuste.

Démarrage rapide
Prérequis
Un compilateur C (par exemple, GCC).

make (facultatif, pour une compilation simplifiée).

Compilation du projet
Clonez le dépôt :

Bash

git clone https://github.com/Kram-31/Gestion_De_Notes_Simple.git
cd Gestion_De_Notes_Simple

Bash

