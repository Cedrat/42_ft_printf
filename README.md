# 42 ft_printf
## Note obtenue 100/100
### Rendu pour compiler et fonctionner sous MacOS Mojave

Projet dont le but est de recoder plusieurs éléments de la fonction printf.
La fonction printf est une fonction permettant d'afficher du texte formatée selon des paramétres passés. On peut afficher des nombres, des chaines de caractères, des adresses..
Dans le cadre de ce projet, on doit pouvoir recoder les conversions suivantes :  
- %c : Afficher un caractère.
- %s : Afficher une chaine de caractères.
- %d : Afficher un nombre entier.
- %d %i : Afficher un nombre entier.
- %u : Afficher un unsigned int, un entier purement négatif.
- %x %X : Afficher un unsigned int en base 16. Héxadécimale.
- %p : Afficher l'addresse d'un pointeur.
- %% : Afficher le caractère %

On doit aussi coder les modificateurs suivants qui sont suivi d'un nombre positif :
- . : Permet de préciser le nombre de décimales, le nombre de caractéres ou le nombre de chiffres significatifs à afficher.
- \- : Permet de créer un alignement à droite par rapport au nombre indiqué à la suite de cet indicateur.
- 0 : Ajoute un nombre de zéro jusqu'à atteindre la valeur du nombre indiqué à la droite de l'indicateur.

### Prototype
Le prototype de la fonction est le suivant :
  int	ft_printf(const char *format, ...)

### Paramètres    
Le premier paramétres est une chaine de caractéres. 
Les paramétres suivants sont les entiers/les chaines de caractéres relíés aux conversions présentes dans la chaine de caractéres.  
Par exemple :  
```ft_printf("%d est un %s magnifique" , 42, nombre);```
donnera en réponse : 42 est un nombre magnifique  
Un exemple d'utilisations d'indicateur pourrait donner :  
```ft_printf("%05d", 42)```donnera : 00042  

  
### Valeurs de retour
Un entier positif : Le nombre de caractères affichés à l'écran.
-1 : Erreur.  
 
### Fonctions autorisés 
write : permet d'écrire dans un file descriptor
malloc : fonction qui permet d'allouer de la mémoire.   
free : permet de rendre au systéme la mémoire empruntée par malloc.  
va_start : Permet d'initialiser une variable va_list qui permettra d'accéder aux paramétres passés a la fonction.  
va_arg : Permet de récupérer la variable suivante.  
va_end : Permet d'indiquer qu'on est arrivé à la fin des paramétres de va_list.

### Notions apprises  
Fonctionnement des fonctions à paramétres variables.  
Utilisations des structures pour le transport des données.  
Compréhension du systéme de priorités des modificateurs.

