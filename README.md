_This project has been created as part of the 42 curriculum by mbuchet._

# Description

libft est une librairie utilitaires en language C qui reprend pleins de fonction déjà existante de base sur le languague C, diviser en 3 partie distante (Libc functions, Additional functions et Linked list).

# Instructions

Pour compiler le projet il suffit d'éxecuter `make` dans la console dans le dossier root et le fichier attendu nommé `libft.a` sera créée.
Avant chaque nouvelle compilation, n'oubliez pas d'exécuter `make fclean` pour supprimer les fichiers indésirables de l'ancienne compilation.
Tester et compiler sur un environnement Ubuntu.

# Resources

## Libc functions
- ft_isalpha: vérifier si un caractère est dans l'alphabet.
- ft_isdigit: vérifier si un caractère est un nombre.
- ft_isalnum: vérifier si un caractère est dans l'alphabet ou que cela est un nombre.
- ft_isascii: vérifier si un caractère est dans un format ASCII.
- ft_isprint: vérifier si un caractère est printable (dans la console par exemple).
- ft_strlen: connaître la longueur d'une chaîne de caractères.
- ft_memset: écrire un caractère spécifique dans une chaîne de caractères jusqu'à tel nombre de caractère(s).
- ft_bzero: écrire un NULL dans une chaîne de caractères jusqu'à tel nombre de caractère(s).
- ft_memcpy: copier une partie d'une chaîne de caractères dans une chaîne de caractères jusqu'à tel nombre de caractère(s) en retournant la valeur finale de destination.
- ft_memmove: copier une partie d'une chaîne de caractères (src) dans une chaîne de caractères (dest) jusqu'à tel nombre de caractère(s) en fixant un possible chevauchement si les 2 pointeurs d'une même fonction en retournant la valeur finale de destination.
- ft_strlcpy: copier une chaîne de caractères (src) dans une chaîne de caractères (dest) en precisant la limite de ce qu'il peut copier à la destination en remettant le 0 à la fin de la copie à sa destination pour préciser la fin, en retournant toujours la longueur de src.
- ft_strlcat: copier une chaîne de caractères (src) à la suite de la chaîne de caractères (dest) en precisant la limite de ce qu'il peut copier à la destination en remettant le 0 à la fin de la copie de sa destination pour préciser la fin de la chaîne, en retournant toujours la longueur finale de dest (exemple: `World` est dest et src est ` Hello` dest à la fin deviendra `Hello World`).
- ft_toupper: modifier un caractère d'un alphabet miniscule en majuscule.
- ft_tolower: modifier un caractère d'un alphabet majuscule en miniscule.
- ft_strchr: trouver un caractère dans une chaîne de caractères et retourner à l'index qui se trouve, s'il trouve pas on retourne NULL.
- ft_strrchr: même principe que ft_strchr sauf qu'il vérifie le dernier par le premier.
- ft_strncmp: boucle sur les 2 chaîne de caractères jusqu'à trouver un caractère non égale à l'autre au même index en retournant la soustraction du caractère de l'index s1 et s2 ou si l'index de s1 est égale à 0, si non retourne 0.
- ft_memchr: boucle sur une chaîne de caractères jusqu'à trouver un caractère égale à l'autre au même index en retournant le caractère à l'index trouver si non retourne NULL.
- ft_memcmp: boucle sur les 2 chaîne de caractères jusqu'à trouver un caractère non égale à l'autre au même index en retournant la soustraction du caractère de l'index s1 et s2, si non retourne 0.
- ft_strnstr: boucler le chaîne de caractères `big` jusqu'à trouver respectivement dans l'ordre la suite de caractères de `little` et retourner directement le premier caractère de l'index, si non retourner NULL.
- ft_atoi: "transformer" une chaîne de caractères en un possible nombre en gérant aussi s'il est négative.
- ft_calloc: proche d'un fonctionnement de malloc, alloue un tableau de 'nmemb' éléments fois sa taille 'size' et remplis tout à zéro.

## Additional functions
- ft_substr: permet de récuperer une chaîne de caractères à un index précis dans une chaîne de caractères avec une fin dans sa longueur totale voulu.
- ft_strjoin: permet de joindre 2 chaînes de caractères dans une nouvelle chaîne de caractères.
- ft_strtrim: permet de supprimer le début et fin d'une chaîne de caractères quand c'est possible à partir d'une liste de chaîne de caractères.
- ft_split: permet diviser une chaîne de caractères en plusieurs tableau de chaîne de caractères à partir d'un séparateur.
- ft_itoa: permet à partir d'un int de retourner ce nombre dans une chaîne de caractères.
- ft_strmapi: boucle sur une chaîne de caractères et applique la modification lié au ponteur de la fonction nommé `f` sur chaque caractère de la chaîne en créant une nouvelle chaîne.
- ft_striteri: même principe que ft_strmapi sauf qu'il ne crée pas de chaîne mais modifie celle actuelle.
- ft_putchar_fd: écris un caractère dans la console.
- ft_putstr_fd: permet d'écrire une chaîne de caractères dans la console.
- ft_putendl_fd: même principe que ft_putstr_fd, ajoute juste une nouvelle ligne à la fin.
- ft_putnbr_fd: permet d'écrire un nombre dans la console.

## Linked list
- ft_lstnew: permet de créer un nouvel élément avec comme argument son contenu à mettre dedans.
- ft_lstadd_front: permet d'ajouter un élément au début d'une liste chaînée.
- ft_lstsize: permet de connaître le nombre d'éléments d'une liste chaînée.
- ft_lstlast: permet de récuperer le dernier éléments d'une liste chaînée.
- ft_lstadd_back: permet d'ajouter un élément à la fin d'une liste chaînée.
- ft_lstdelone: permet de supprimer un élément avec comme argument un pointeur d'une fonction qui le supprime.
- ft_lstclear: permet de vider tous les éléments d'une liste chaînée
- ft_lstiter: permet d'itérer sur chaque contenu d'un élément d'une liste chaînée en appliquant un pointeur d'une fonction.
- ft_lstmap: permet de parcourir une liste chaînée, d'appliquer la fonction f à chaque élément et de créer une nouvelle liste, la fonction del est utilisée si un élément n'arrive pas à être alloué.

## References
- Sujet du PDF, version 19.2, Libft de 42 Bruxelles.
- Le man consultées sur Ubuntu (WSL) et Ubuntu à l'école, les quelques fonctions non disponible sur le man en local j'ai chercher sur internet, je n'ai plus les références.
- Quelques anciens codes fais durant la piscine de 42 Bruxelles, en février 2026.

## Usage of IA
Usage de l'IA dans certains cas comme "professeur" en demandant par exemple sur une function si c'est correct sur certains cas de crash possible d'une function en precisant toujours de ne jamais donner de code et de résolution mais avec des explications/indices pour m'y guider, je l'ai utuliser aussi pour quelques traductions du man en francais, les prompts sont généralement sur les modèles GPT.

# Special Thanks
Merci à Lucas (pseudoàmettre sur l'intra 42) de m'avoir accompagnée sur une coding session tryhard de quelques jours durant une bonne partie entre la 1 et 2 ensemble sur le projet Libft, toujours en respectant de ne pas se donner les codes jusqu'à avoir fini entièrement la fonction, une experience à refaire pour ceux qui n'ont pas la motivation sur un gros projet.
