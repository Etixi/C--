# Aperçu de l'installation et de la configuration

## Aperçu de la section

+ Microsoft Windows, Mac OSX, Ubuntu Linux 18.04
     + Compilateur `C++`
     + Environnement de développement intégré (IDE) `CodeLite`
     + Configurer `CodeLite`
     + Créer un modèle de projet `CodeLite` par défaut

+ Utilisation de la ligne de commande
+ Utilisation d'un compilateur « basé sur le Web ».


# Installing the C++ Compiler on Windows

+ Verfier votre système d'informations : 

    + `Système d’exploitation 64 bits, processeur x64`

+ [C++ Compiler](https://winlibs.com/#download-release)

```
>g++ --version

g++ (MinGW-W64 x86_64-ucrt-posix-seh, built by Brecht Sanders, r5) 13.2.0
Copyright (C) 2023 Free Software Foundation, Inc.
This is free software; see the source for copying conditions.  There is NO
warranty; not even for MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.

>g++

g++: fatal error: no input files
compilation terminated.
```

# Installing CodeLite on windows

+ [CodeLite](https://downloads.codelite.org/)

# Installing the C++ Compiler on Mac OSX

```
sudo xcode-select -install
Password : Enter
Click to install
Click to agree

> g++ --version
```

# Installing CodeLite on Mac OSX

+ [CodeLite](https://downloads.codelite.org/)


# Utilisation de l'interface de ligne de commande

+ Un éditeur de texte (pas un traitement de texte)
+ Une fenêtre d'invite de commande ou de terminal
+ Un compilateur `C++` installé

+ Pas besoin d'IDE
+ Flux de travail simple et efficace
+ Mieux à mesure que vous gagnez de l'expérience
+ Peut être utilisé si vous êtes submergé par les « IDE »
+ Utile si les ressources matérielles sont limitées

# Installing CodeLite on Linux
+ [CodeLite](https://downloads.codelite.org/)

# Using Command-Line Interface on Windows

```
>dir

>g++ -Wall -std=c++14 main.cpp

>dir
 
>a
Hello windows command line !

>g++ -Wall -std=c++14 main.cpp -o main.exe

>dir

>main
Hello windows command line !

>g++ -Wall -std=c++14 main.cpp -o main.exe

>g++ -Wall -std=c++14 main.cpp -o main.exe

>main
Hello windows command line !
```

# Using a Web-based C++ Compiler

+ [C++ shell Homepage](https://cpp.sh/)

+ [OnlineGDB Homepage](https://www.onlinegdb.com/)

+ [Repl.It](https://replit.com/)

+ [IDE One](https://ideone.com/)

### Licence

[Licence](../LICENSE)







