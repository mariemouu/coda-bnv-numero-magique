
## Camarade : Swen
- Idée apportée : personnaliser le jeu (demander le prénom du joueur,
  messages d'indices plus drôles) et limiter la partie à quelques essais avec un compteur.

## Aide ia : chatgpt 
- Je lui ai demandé de m'expliquer "srand(time(NULL));" tiré de la consigne.
- Redaction des phrases du jeu

## Aide ia : Claude 
- En compilant le projet, j'ai utilisé par erreur `AIDE_EXTERIEURE.md` comme nom de sortie (`gcc main.c -o AIDE_EXTERIEURE.md`). Le texte a donc été remplacé par un exécutable, puis commité et poussé. J'ai demandé à Claude de m'aider à comprendre le problème et à restaurer le fichier depuis l'historique Git.
Commandes utilisées :

- `file AIDE_EXTERIEURE.md` : identifier le vrai type du fichier (binaire ELF au lieu de texte)
- `git status` : vérifier l'état du dépôt
- `git log --oneline -- AIDE_EXTERIEURE.md` : lister les commits ayant modifié le fichier
- `git show eaa1abb:AIDE_EXTERIEURE.md | head -20` : vérifier le contenu dans l'ancien commit
- `git checkout eaa1abb -- AIDE_EXTERIEURE.md` : restaurer la version texte
- `chmod -x AIDE_EXTERIEURE.md` : retirer la permission d'exécution

## But du jeu
Deviner le nombre magique choisi par l'ordinateur, entre 1 et 100, en 5 essais maximum.

## Fonctionnement
1. Le jeu demande le prénom du joueur.
2. Le joueur propose un nombre.
3. Le jeu indique si le nombre magique est plus grand ou plus petit.
4. La partie s'arrête quand le nombre est trouvé ou après 5 essais ratés.

