_This project has been created as part of the 42 curriculum by mbuchet._

# Description

libft est une librairie utilitaires en language C qui reprend pleins de fonction déjà existante de base sur le languague C, diviser en 3 partie distante (Libc functions, Additional functions et Linked list).

# Instructions

Soon...

# Resources

## Libc functions
- ft_isalpha: vérifier si un caractère est dans l'alphabet.
- ft_isdigit: vérifier si un caractère est un nombre.
- ft_isalnum: vérifier si un caractère est dans l'alphabet ou que cela est un nombre.
- ft_isascii: vérifier si un caractère est dans un format ASCII.
- ft_isprint: vérifier si un caractère est printable (dans la console par exemple).
- ft_strlen: connaître la longueur d'une chaine de caractères.
- ft_memset: écrire un caractère spécifique dans une chaine de caractère jusqu'à tel nombre de caractère(s).
- ft_bzero: écrire un NULL dans une chaine de caractère jusqu'à tel nombre de caractère(s).
- ft_memcpy: copier une partie d'une chaine de caractère dans une chaine de caractère jusqu'à tel nombre de caractère(s) en retournant la valeur finale de destination.
- ft_memmove: copier une partie d'une chaine de caractère (src) dans une chaine de caractère (dest) jusqu'à tel nombre de caractère(s) en fixant un possible chevauchement si les 2 pointeurs d'une même fonction en retournant la valeur finale de destination.
- ft_strlcpy: copier une chaine de caractère (src) dans une chaine de caractère (dest) en precisant la limite de ce qu'il peut copier à la destination en remettant le 0 à la fin de la copie à sa destination pour préciser la fin, en retournant toujours la longueur de src.
- ft_strlcat: copier une chaine de caractère (src) à la suite de la chaine de caractère (dest) en precisant la limite de ce qu'il peut copier à la destination en remettant le 0 à la fin de la copie de sa destination pour préciser la fin de la chaine, en retournant toujours la longueur finale de dest (exemple: `World` est dest et src est ` Hello` dest à la fin deviendra `Hello World`).
- ft_toupper: modifier un caractère d'un alphabet miniscule en majuscule.
- ft_tolower: modifier un caractère d'un alphabet majuscule en miniscule.
- ft_strchr: trouver un caractère dans une chaine de caractères et retourner à l'index qui se trouve, s'il trouve pas on retourne NULL.
- ft_strrchr: meme principe que ft_strchr sauf que on ne vérifie pas le dernier index donc la fin d'une chaine de caractère.
- ft_strncmp: boucle sur les 2 chaine de caractères jusqu'à trouver un caractère non égale à l'autre au meme index en retournant la soustraction du caractère de l'index s1 et s2 ou si l'index de s1 est égale à 0, si non retourne NULL.
- ft_memchr: boucle sur les 2 chaine de caractères jusqu'à trouver un caractère égale à l'autre au meme index en retournant le caractère à l'index trouver si non retourne NULL.
- ft_memcmp: boucle sur les 2 chaine de caractères jusqu'à trouver un caractère non égale à l'autre au meme index en retournant la soustraction du caractère de l'index s1 et s2, si non retourne NULL.
- ft_strnstr: boucler le chaine de caractères `big` jusqu'à trouver respectivement dans l'ordre la suite de caractères de `little` et retourner directement le premier caractère de l'index, si non retourner NULL.
- ft_atoi: "transformer" une chaine de caractère en un possible nombre en gérant aussi s'il est négative.
- ft_calloc: proche d'un fonctionnement de malloc, en precisant le nombre de mémoire allouer pour un type (comme on fesait avec sizeof(char) ou sizeof(int) par exemple) et la taille de l'array en retourne l'array crée (basé sur un array de str pour utuliser facilement le ft_memset).

## Additional functions
- ft_substr: permet de récuperer une chaine de caractères à un index précis dans une chaine de caractères avec une fin dans sa longueur totale voulu.
- ft_strjoin: permet de joindre 2 chaines de caractères dans une nouvelle chaine de caractères.
- ft_strtrim:
- ft_split:
- ft_itoa:
- ft_strmapi:
- ft_striteri:
- ft_putchar_fd:
- ft_putstr_fd:
- ft_putendl_fd:
- ft_putnbr_fd:

## Linked list
- ft_lstnew:
- ft_lstadd_front:
- ft_lstsize:
- ft_lstlast:
- ft_lstadd_back:
- ft_lstdelone:
- ft_lstclear:
- ft_lstiter:
- ft_lstmap:

## Usage of IA
Usage de l'IA dans certains cas comme "proffesseur" en demandant par exemple sur une function si c'est ok en precisant toujours de ne jamais donner de code et de résolution mais avec des explications, basé sur le modèle GPT.

# Special Thanks
Merci à Lucas (pseudoàmettre sur l'intra 42) de m'avoir accompagnée sur une coding session tryhard de quelques jours durant une bonne partie entre la 1 et 2 ensemble sur le projet Libft, toujours en respectant de ne pas se donner les codes jusqu'à avoir fini entièrement la fonction, une experience à refaire pour ceux qui n'ont pas la motivation sur un gros projet.
