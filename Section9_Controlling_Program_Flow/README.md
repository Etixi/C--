Section 9 : Controlling Program Flow
===


## Informations sur le papier
- Titre : Programmation C++
- Auteurs : `Etienne KOA`


## Aperçu de la section
+ Contrôle du déroulement du programme
   - Séquence
     - Ordonner les déclarations de manière séquentielle
   - Sélection
     - Faire des décisions
   - Itération
     - Boucler ou répéter

## Sélection - Prise de décision

+ Instruction « Si »
+ Instruction `If-else`
+ Instructions `If` imbriquées
+ Instruction `switch`
+ Opérateur conditionnel `?:`

## Boucle d'itération

+ boucle `for`
+ Boucle `for` basée sur une plage
+ boucle `while`
+ boucle `do-while`
+ `continue` et `break`
+ "Boucles" infinies
+ "Boucles" imbriquées

## Déclarations « Si »

![Si déclarations](../images/image54.jpg)

+ `Si` l'expression est vraie, alors exécutez l'instruction.
+ `Si` l'expression est fausse, ignorez l'instruction

![Si déclarations](../images/image55.jpg)

![Si déclarations](../images/image56.jpg)

+ instruction de bloc

![Si déclarations](../images/image57.jpg)

## Instruction `Bloquer`

![Instruction de bloc](../images/image58.jpg)


+ Créez un bloc de code en incluant plus d'une instruction dans le code `block{}`.
+ Les blocs peuvent également contenir des déclarations de variables.
+ Ces variables ne sont visibles que dans la portée locale du bloc.



## Déclaration `If-else`

![Si-autre](../images/image59.jpg)

+ `Si` l'expression est `true` alors exécutez `statement1`.
+ `Si` l'expression est `false` alors exécutez `statement2`.

![Si-autre](../images/image60.jpg)

![Si-autre](../images/image61.jpg)

![Si-autre](../images/image62.jpg)

![Si-autre](../images/image63.jpg)

## Déclarations `if` imbriquées

![If](../images/image64.jpg)


+ L'instruction `If` est imbriquée dans une autre.
+ Permet de tester plusieurs conditions.
+ `else` appartient au `if` proche.

![If](../images/image64a.jpg)

![If](../images/image65.jpg)

![If](../images/image66.jpg)

#### The `switch` statement

![Switch](../images/image67.jpg)

+ exemple : 

![Switch](../images/image68.jpg)

+ exemple de chute

![Switch](../images/image69.jpg)

+ avec une énumération

![Switch](../images/image70.jpg)

+ L'expression de contrôle doit être évaluée comme un type entier.
+ L'expression case doit être une expression constante qui s'évalue en entiers ou en littéraux entiers.
+ Une fois qu'une correspondance se produit, toutes les sections de cas suivantes sont exécutées « JUSQU'À » ce qu'un « break » soit atteint et que le « switch » soit terminé.

+ Meilleure pratique : fournissez une instruction de rupture pour chaque cas.
+ Meilleure pratique - « par défaut » est facultatif, mais doit être géré.




