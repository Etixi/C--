Section 4 : Getting Started
===



## Informations sur le papier
- Titre : `Programmation C++`
- Auteurs : `Etienne KOA`


## Notre premier programme

+ Présentation rapide de l'EDI CodeLite

+ Notre premier programme
   - Bâtiment
   - En cours d'exécution
   - Les erreurs
   - Avertissements



## Erreurs du compilateur

+ Les langages de programmation ont des règles

+ `Erreurs de syntaxe` - quelque chose ne va pas avec la structure

```
std::cout << "Erreurs << std::endl;
```

+ `Erreurs sémantiques` - quelque chose ne va pas avec la signification `a + b` ; Quand cela n'a pas de sens d'ajouter « a » et « b ».



## Avertissements de compilation

+ Ne les ignorez PAS !

   + Le compilateur a reconnu un problème avec votre code qui pourrait entraîner un problème potentiel.

   + Ce n'est qu'un avertissement car le compilateur est toujours capable de générer du code machine correct.

```
int miles_driven;
   std :: count << miles_driven;
```

+ avertissement : `miles_driven` est utilisé non initialisé...


## Erreurs de l'éditeur de liens

+ L'éditeur de liens a du mal à rassembler tous les fichiers objets pour créer un exécutable.

+ Il manque généralement une bibliothèque ou un fichier objet.

## Erreurs d'exécution

+ `Erreurs` qui se produisent lors de l'exécution du programme.
+ Quelques erreurs d'exécution typiques
   + Diviser bt zéro
   + Fichier introuvable
   + Mémoire insuffisante

+ Peut provoquer le « crash » de votre programme.
+ La gestion des exceptions peut aider à gérer les erreurs d'exécution.


## Erreurs logiques

+ Erreurs ou bugs dans votre code qui entraînent un mauvais fonctionnement de votre programme.
+ Les erreurs logiques sont des erreurs commises par le programmeur.

+ Supposons que nous ayons un programme qui détermine si une personne peut voter à une élection et que vous devez avoir 18 ans ou plus pour voter.


```
if (age > 18){
  std::cout << "Yes, you can vote!;
}
```


## Défi

+ Créez un programme `C++` qui demande à l'utilisateur son numéro préféré entre 1 et 100 puis lisez ce numéro depuis la console.

+ Supposons que l'utilisateur entre 24.

+ Affichez ensuite ce qui suit sur la console :

```
Incroyable!! C'est aussi mon numéro préféré !
Non vraiment !!, le 24 est mon numéro préféré !
```

Vous trouverez ci-dessous 2 exemples d'exécution du programme :
=============================================================

+ Entrez votre numéro préféré entre 1 et 100 : 24.
+ Incroyable !! C'est aussi mon numéro préféré !
+ Non vraiment !!, le 24 est mon numéro préféré !

## Quiz de la section 4

#### Question 1

+ `Compilateurs` sont utilisés pour traduire les intructions du code source du langage de programmation en instructions de langage machine appropriées.

#### Question 2

+ Un environnement de développement intégré `(IDE)` comprend généralement

  + Un débogueur
  + Un éditeur de texte
  + Un compilateur

#### Question 3

+ Un `programme` est un ensemble d'instructions qu'un ordinateur exécute pour résoudre un problème.

#### Question 4

+ Les erreurs de syntaxe sont détectées par le `compilateur`.

#### Question 5

+ Un ensemble d'étapes précises pour résoudre est appelé `a(n)`:

  + `Algorithme`

#### Question 6

+ Les déclarations écrites par les programmeurs sont appelées `code source`.

#### Question 7

+ Les règles qui doivent être suivies lors de l'écriture de programmes dans les langages de programmation spécifiques sont appelées `syntaxe`.


#### Question 8

+ Les erreurs du programmeur qui entraînent un programme à produire des résultats incorrects sont appelées `erreurs de logique`.

#### Question 9

+ Si vous déclarez une variable et l'utilisez avant de l'initialiser, le compilateur générera `a(n) warning`.

#### Question 10

+ L'erreur générée lorsque toutes les parties qui composent un programme ne peuvent pas être assemblées parce qu'il en manque une ou plusieurs est appelée `linker error`.



