# README "calculatrice-c"

**I- Generalité sur les librairies**

Les librairies contiennent la definition de fonction susceptible d'etre utiliser par plusieurs programmes simultanement ou non. Il existe deux types de librairie : Les librairies statiques et dynamiques.

Le nom des librairies statiques est typiquement de la forme *libxxx.a* ("libm.a" pour les mathematiques; "libjpeg.a" pour les images). Le nom des librairies dynamiques est de la forme *libxxx.so*.

Utiliser une librairie statique revient a inclus la definition des fonctions de la librairie dans le fichier executable pendant l'etape de l'execution de lien, donc pendant la compilation et avant le lancement du programme.

<sub>Dans ce repo, nous allons créer et utiliser une librairie statique.</sub>


**II- Création de la librairie**

Pour cela, on va créer les fichiers en-tête (.h) qui contiennent la definition des fonctions qu'on veut mettre dans notre bibliotheque. Ensuite on les definit dans les fichiers sources (.c).

Grace a la commande ci-dessous, nous allons generer les fichiers objets (.o)  
>gcc -c *.c

Une fois que les objets créés, on peut supprimer ou garder les ".c" car ils sont deja inclus dans les ".o". Apres cela, il faut separer les fichiers en placant les ".h" dans un dossier *include*, les ".o" dans le dossier *lib* et le ou les programmes principaux dans le dossier *src*.
Dans le dossier "src", vous lancez la commande suivante pour créer l'archive (.a) qui va contenir les fichiers objets ainsi que leur definition. Vous pourrez donc les supprimer a souhait. calculatrice etant le nom de la librairie ici et par convention, on le fait preceder de lib (donc *libcalculatrice.a*)
>ar -rscv libcalculatrice.a *.o

On peut maintenant lancer la commande suivant pour créer l'executable
>gcc -Wall -Wextra -pedantic src/prog.c -I include -L lib -l calculatrice -o prog
Un prog sera créé qui pourra etre executer a souhait.


**III- Notes importantes**

>Il faut include dans les fichiers sources, les .h dont on a besoin.

>L'argument -I include indique les .h se trouve dans le dossier include. -L lib lui indique que la librairie statique est dans le dossier lib.

>Plus besoin de mettre libcalculatrice. Juste calculatrice marche.
