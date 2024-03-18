Section 23 : Bonus Section - Enumerations
===

## Information
- Title:  `Bonus Section - Enumerations`
- Authors:  `Etienne KOA`


## Bonus Section Overview

**`C++` Énumérations**

+ Qu'est-ce qu'une énumération ?
   + Motivation
+ Structure d'une énumération
+ Type d'énumérations
   + Énumération sans portée
   + Énumération ciblée
+ Énumérations en cours d'utilisation

## Motivation

+ Qu'est-ce qu'une énumération ?

   + Un type défini par l'utilisateur qui modélise un ensemble de valeurs intégrales constantes

      + Les jours de la semaine (Mon, Tue, Wed, ...)
      + Les mois de l'année (Jan, Feb, Mar, ...)
      + Les couleurs dans un jeu de cartes (Clubs, Hearts, Spades, Diamonds)
      + Les valeurs dans un jeu de cartes (Ace, Two, Three, ...)
      + États du système (Idle, Defense_Mode, Attack_Mode, ...)
      + Les directions sur une boussole (North, South, East, West)

+ Avant les types énumérés
   + Constantes numériques sans nom
   + `Nombres magiques`

+ Ces constantes seraient utilisées comme conditions dans les instructions de contrôle
+ Souvent, on n'aurait aucune idée de ce que faisait un algorithme

+ En conséquence, de nombreux algorithmes souffraient d'une faible lisibilité et d'un nombre élevé d'erreurs logiques.


**Lisibilité**

![enum](images/image1.jpeg)
![enum](images/image2.jpeg)


**Exactitude algorithmique**

![enum](images/image3.jpeg)
![enum](images/image4.jpeg)

## La structure d'une énumération

**La structure d'une énumération**

![enum](images/image5t.jpeg)
![enum](images/image6.jpeg)
![enum](images/image7.jpeg)

**Liste des énumérations**
![énumération](images/image8.jpeg)



**Type d'énumération**
![énumération](images/image9.jpeg)

<br/>

**Nom de l'énumération**
![énumération](images/image10.jpeg)

## Énumérations sans portée

+ Utilisation des instructions `if` et `switch` avec des énumérations sans portée

![énumération](images/image11.jpeg)

![énumération](images/image12.jpeg)

![énumération](images/image13.jpeg)

![énumération](images/image14.jpeg)

![énumération](images/image15.jpeg)

![énumération](images/image16.jpeg)

+ Utilisation de `cin` et `cout` avec des énumérations sans portée

![énumération](images/image17.jpeg)

![énumération](images/image18.jpeg)

![énumération](images/image20.jpeg)

## Énumérations ciblées

![énumération](images/image21.jpeg)

![énumération](images/image22.jpeg)



**Motivation**

![énumération](images/image23.jpeg)



+ Utilisation des instructions `if` et `switch` avec des énumérations avec portée

![énumération](images/image24.jpeg)

+ Utilisation des valeurs de l'énumérateur étendu

![énumération](images/image24a.jpeg)
![énumération](images/image25.jpeg)



