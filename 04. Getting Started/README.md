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

