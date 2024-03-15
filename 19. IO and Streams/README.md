Section 19 : I/O and Streams
===

## Information
- Title:  `I/O and Streams`
- Authors:  `Etienne KOA`


## Aperçu de la section
- Flux et E/S
- Manipulateurs de flux
- Lire et écrire dans un fichier texte
- Utilisation de flux de chaînes

## Fichiers, flux et E/S

+ `C++` utilise les flux comme interface entre le programme et les périphériques d'entrée et de sortie
+ Indépendant de l'appareil lui-même
+ Séquence d'octets
+ Le flux d'entrée fournit des données au programme
+ Le flux de sortie reçoit les données du programme

![I/O_and_Streams](images/image1.jpeg)

**Fichiers d'en-tête communs**

![I/O_and_Streams](images/image2.jpeg)

**Classes de flux couramment utilisées**

![I/O_and_Streams](images/image3.jpeg)

**Objets de flux global**

![I/O_and_Streams](images/image4.jpeg)

+ Objets globaux - initialisés avant l'exécution principale.


+ La meilleure pratique consiste à utiliser `cerr` pour les messages d'erreur et `clog` pour les messages de journal.

## Manipulateurs de flux

+ Les flux ont des fonctions membres utiles pour contrôler le formatage

+ Peut être utilisé sur les flux d'entrée et de sortie

+ Le temps de l'effet sur le flux varie

+ Peut être utilisé comme fonctions membres ou comme manipulation

```
std::count.width(10);   /: member function
std::cout << std::setw(10); // manipulator
```

+ Nous nous concentrerons sur l'utilisation du manipulateur

**Common stream manipulators**

+ **Booléen**
  + `boolalpha, noboolalpha`

+ **Entier**
  + `dec, hex, oct, showbase, noshowbase, showpos, noshowpos, uppercase, nouppercase`

+ **Point flottant**
  + `fixed, scientific, setprecision, showpoint, noshowpoint, showpos, noswhopos`

+ **Largeur du champ, justification et remplissage**
  + `setw, left, right, internal, setfill`

+ **Autres**
  + `endl, flush, skipws, noskipws, ws`


## Stream Manipulators - boolean

**Formatage des types booléens**

+ La valeur par défaut lors de l'affichage des valeurs booléennes est 1 ou 0.
+ Parfois, les chaînes true ou false sont plus appropriées


![I/O_and_Streams](images/image5.jpeg)
![I/O_and_Streams](images/image6.jpeg)

+ Toutes les autres sorties booléennes seront affectées

![I/O_and_Streams](images/image6a.jpeg)


![I/O_and_Streams](images/image7.jpeg)

## Manipulateurs de flux - nombres entiers

**Formatage des types entiers**

+ La valeur par défaut lors de l'affichage de valeurs entières est :

   + `noshowbase` - préfixe utilisé pour afficher le format hexadécimal ou octal
   + `nouppercase` - lors de l'affichage des valeurs `prefix` et `hex`, elles seront en minuscules.
   + `noshowpos` - aucun `+` n'est affiché pour les nombres positifs

+ Ces manipulateurs affectent toutes les sorties ultérieures vers le flux

**Formatage des types entiers - base de définition**

![I/O_and_Streams](images/image8.jpeg)

**Formatage des types entiers - affichage de la base**

![I/O_and_Streams](images/image9.jpeg)

**Formatage des types entiers - affichage hexadécimal en majuscule**

![I/O_and_Streams](images/image10.jpeg)

**Formatage des types entiers - affichage du signe positif**

![I/O_and_Streams](images/image11.jpeg)

**Définition/réinitialisation des types entiers**

![I/O_and_Streams](images/image12.jpeg)


## Manipulateurs de flux - Virgule flottante

**Formatage des types à virgule flottante**

+ La valeur par défaut lors de l'affichage des valeurs à virgule flottante est :

   + `setprecision` - nombre de chiffres affichés (6).
   + `fixed` - non fixe à un nombre ou à des chiffres spécifiques après la virgule décimale
   + `noshowpoint` - les zéros à droite ne sont pas affichés
   + `nouppercase` - lors de l'affichage en notation scientifique
   + `noshowpos` - aucun `+` n'est affiché pour les nombres positifs

+ Ces manipulateurs affectent toutes les sorties ultérieures du flux.

**Formatage des types à virgule flottante - précision**

![I/O_and_Streams](images/image13.jpeg)
![I/O_and_Streams](images/image14.jpeg)


**Formatage des types à virgule flottante - corrigé**

![I/O_and_Streams](images/image15.jpeg)

**Formatage des types à virgule flottante - fixé**

![I/O_and_Streams](images/image16.jpeg)
![I/O_and_Streams](images/image17.jpeg)

**Formatage des types à virgule flottante – scientifique**

![I/O_and_Streams](images/image18.jpeg)

**Formatage des types à virgule flottante - majuscules scientifiques**

![I/O_and_Streams](images/image19.jpeg)

**Formatage des types à virgule flottante - affichage du signe positif**

![I/O_and_Streams](images/image20.jpeg)

**Formatage des types à virgule flottante - zéros à droite**

![I/O_and_Streams](images/image21.jpeg)

**Retour aux paramètres généraux**

![I/O_and_Streams](images/image22.jpeg)


## Manipulateurs de flux - aligner et remplir

**Largeur du champ, aligner et remplir**

+ La valeur par défaut lors de l'affichage des valeurs à virgule flottante est :
   + `setw` - non défini par défaut
   + `left` - lorsqu'il n'y a pas de largeur de champ, à droite - lors de l'utilisation de la largeur de champ
   + `fill` - non défini par défaut - un espace vide est utilisé.

+ Certains de ces manipulateurs n'affectent que l'élément de données suivant mis sur le flux.

**Défaut**
![I/O_and_Streams](images/image23.jpeg)


**Largeur du champ - `setw`**
![I/O_and_Streams](images/image24.jpeg)
![I/O_and_Streams](images/image25.jpeg)


**Largeur du champ - `justification`**
![I/O_and_Streams](images/image26.jpeg)


**Largeur du champ - `setw`**
![I/O_and_Streams](images/image27.jpeg)

**Largeur du champ de remplissage - `setfill`**
![I/O_and_Streams](images/image28.jpeg)


**Largeur du champ - `setw`**
![I/O_and_Streams](images/image29.jpeg)

## Lecture à partir d'un fichier texte

**Fichiers d'entrée (`fstream` et `ifstream`)**

1. `#include <fstream>`

2. Déclarez un objet `fstream` ou `ifstream`.

3. Connectez-le à un fichier sur votre système de fichiers (l'ouvre en lecture)

4. Lire les données du fichier via le flux

5. Fermez le flux

**Ouverture d'un fichier en lecture avec `(fstream)`**

![I/O_and_Streams](images/image30.jpeg)

**Ouverture d'un fichier en lecture avec `(ifstream)`**

![I/O_and_Streams](images/image31.jpeg)

**Ouvrir un fichier en lecture avec `open`**

![I/O_and_Streams](images/image32.jpeg)

**Vérifiez si le fichier s'est ouvert avec succès `(is_open)`**

![I/O_and_Streams](images/image33a.jpeg)

**Vérifiez si le fichier s'est ouvert avec succès - testez l'objet flux**

![I/O_and_Streams](images/image33.jpeg)

**Fermer un fichier**
+ Fermez toujours tous les fichiers ouverts pour éliminer toutes les données non écrites

![I/O_and_Streams](images/image34.jpeg)

**Lecture à partir de fichiers en utilisant `(>>)`**
+ Nous pouvons utiliser l'opérateur d'extraction pour une lecture formatée
+ De la même manière que nous l'avons utilisé avec `cin`

![I/O_and_Streams](images/image35.jpeg)

**Lecture à partir de fichiers à l'aide de `getline`**
+ Nous pouvons utiliser `getline` pour lire le fichier une ligne à la fois

![I/O_and_Streams](images/image36.jpeg)

**Lecture du fichier texte une ligne à la fois**

![I/O_and_Streams](images/image37.jpeg)
![I/O_and_Streams](images/image38.jpeg)

**Lecture du fichier texte un caractère à la fois `(get)`**

![I/O_and_Streams](images/image39.jpeg)

## Écrire dans un fichier texte

**Fichiers de sortie (`fstream` et `ofstream`)**

+ `fstream` et `ofstream` sont couramment utilisés pour les fichiers de sortie

1. `#include <fstream>`

2. Déclarez un objet `fstream` ou `ofstream`

3. Connectez-le à un fichier sur votre système de fichiers (l'ouvre en écriture)

4. Écrivez des données à un moment donné via le flux

5. Fermez le flux

+ Les fichiers de sortie seront créés s'ils n'existent pas

+ Les fichiers de sortie seront écrasés (tronqués) par défaut

+ Peut être ouvert pour que de nouvelles écritures soient ajoutées

+ Peut être ouvert en mode texte ou binaire

**Ouverture d'un fichier en écriture avec `(fstream)`**

![I/O_and_Streams](images/image40.jpeg)

**Ouverture d'un fichier en écriture avec `(ofstream)`**

![I/O_and_Streams](images/image41.jpeg)
![I/O_and_Streams](images/image42.jpeg)


**Ouverture d'un fichier en écriture avec open**
![I/O_and_Streams](images/image43.jpeg)


**Vérifiez si le fichier s'est ouvert avec succès `(is_open)`**
![I/O_and_Streams](images/image43a.jpeg)

**Vérifiez si le fichier s'est ouvert avec succès - testez l'objet flux**
![I/O_and_Streams](images/image44.jpeg)

**Fermer un fichier**
+ Fermez toujours tous les fichiers ouverts pour éliminer toutes les données non écrites

![I/O_and_Streams](images/image45.jpeg)

**Lecture à partir de fichiers en utilisant `(<<)`**
+ Nous pouvons utiliser l'opérateur d'insertion pour l'écriture formatée
+ De la même manière que nous l'avons utilisé avec `cout`

![I/O_and_Streams](images/image46.jpeg)

**Copier un fichier texte une ligne à la fois**

![I/O_and_Streams](images/image47.jpeg)
![I/O_and_Streams](images/image48.jpeg)

**Copier un fichier texte une ligne à la fois `(get/put)`**

![I/O_and_Streams](images/image49.jpeg)
![I/O_and_Streams](images/image50.jpeg)

## Utilisation de flux de chaînes

**`stringstream, istringstream et ostringstream`**

1. `#include <sstream>`

2. Déclarez un objet `stringstream, istringstream ou ostringstream`

3. Connectez-le à un `std::string`

4. Lire/écrire des données depuis/vers le flux de chaînes à l'aide d'E/S formatées


**Lecture à partir d'un `stringstream`**

![I/O_and_Streams](images/image51.jpeg)

**Écrire dans un `stringstream`**

![I/O_and_Streams](images/image52.jpeg)

**Validation de l'entrée avec `stringstream`**

![I/O_and_Streams](images/image53.jpeg)



## Emplacements de fichiers avec certains IDE populaires

+ Emplacement des fichiers et IDE

![I/O_and_Streams](images/image54.jpeg)
  

