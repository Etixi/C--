Section 21 : Lambda Expressions
===

## Information
- Title:  `Lambda Expressions`
- Authors:  `Etienne KOA`


## Aperçu de la section

+ Qu'est-ce qu'une expression lambda ?
   + Motivation
   + Revue des objets fonctions (foncteurs)
   + Relation entre les lambdas et les objets fonction
+ Structure d'une expression lambda
+ Types d'expressions lambda
   + Expression lambda apatride
   + Expression lambda avec état
+ Lambda et le `STL`

## Motivation

+ Avant `C++11`
   + Objets de fonction
   + Pointeurs de fonction

   + Nous écrivons souvent de nombreuses fonctions courtes qui contrôlent les algorithmes
   + Ces fonctions courtes seraient encapsulées dans de petites classes pour produire des objets fonctions
   + Souvent, les classes et les fonctions sont très éloignées de l'endroit où elles sont utilisées, ce qui entraîne des problèmes de modification, de maintenance et de test.
   + Le compilateur ne peut pas intégrer efficacement ces fonctions pour plus d'efficacité

**Objets de fonction**

![lambda](images/image1.jpeg)
![lambda](images/image2.jpeg)
![lambda](images/image3.jpeg)


**Objets de fonction générique**
![lambda](images/image4.jpeg)
![lambda](images/image5.jpeg)
![lambda](images/image6.jpeg)

**En utilisant une expression lambda**
![lambda](images/image6.jpeg)
![lambda](images/image7.jpeg)
![lambda](images/image8.jpeg)



## Structure d'une expression Lambda

**La structure d'une expression lambda**

![lambda](images/image9.jpeg)
![lambda](images/image10.jpeg)
![lambda](images/image11.jpeg)
![lambda](images/image12.jpeg)


**Une simple expression Lambda**
![lambda](images/image13.jpeg)
![lambda](images/image14.jpeg)


**Paramètres des expressions lambda**
![lambda](images/image15.jpeg)
![lambda](images/image16.jpeg)


**Attribution d'une expression lambda à une variable**

![lambda](images/image17.jpeg)
![lambda](images/image18.jpeg)


**Renvoi d'une valeur à partir d'une expression lambda**

![lambda](images/image19.jpeg)


## Expression Lambda sans état

![lambda](images/image20.jpeg)


**Expressions lambda apatrides simples**

![lambda](images/image21.jpeg)
![lambda](images/image22.jpeg)


**Utilisation de valeurs et de références comme paramètres lambda**

![lambda](images/image23.jpeg)
![lambda](images/image24.jpeg)

**Utilisation de pointeurs comme expression lambda**

![lambda](images/image25.jpeg)
![lambda](images/image26.jpeg)

**Utilisation de « tableaux » et de « vecteurs » comme paramètres de référence lambda**

![lambda](images/image27.jpeg)


**Utilisation de auto comme spécificateurs de type de paramètre lambda**

![lambda](images/image28.jpeg)
![lambda](images/image29.jpeg)
![lambda](images/image30.jpeg)


**Utilisation de l'expression lambda comme paramètres de fonction**

![lambda](images/image31.jpeg)


**Renvoi d'expressions lambda à partir de fonctions**

![lambda](images/image32.jpeg)


**Utilisation d'expressions lambda comme paramètres de fonction**

![lambda](images/image33.jpeg)


**Utilisation d'expressions lambda comme prédicats**

![lambda](images/image34.jpeg)


## Expressions Lambda avec état

![lambda](images/image35.jpeg)


**Compilation d'expressions lambda stateless**

![lambda](images/image35a.jpeg)
![lambda](images/image36.jpeg)

**Capture par valeur**

![lambda](images/image37.jpeg)


**Utilisation de mutable pour modifier les variables capturées par valeur**

![lambda](images/image38.jpeg)


**Capture par référence**

![lambda](images/image38a.jpeg)

**Capture par valeur et référence**

![lambda](images/image40.jpeg)

**Capture par défaut**

![lambda](images/image41.jpeg)

**Utilisation de captures par défaut et explicites**

![lambda](images/image42.jpeg)


