# 42-BSQ

Group : pdal-mol & bsouleau
Sujet : https://cdn.intra.42.fr/pdf/pdf/29155/fr.subject.pdf

## Cas particuliers
 |
### Erreurs possibles
> Si assez d'arguments
> While de n arguments
> Si le fichier est bien valide (Ouvrable ?)
> Le fichier peut avoir n'importe quel nom
> Fichier bien formatté
>> N = Nombre de lignes
>> . = Caractères vides
>> o = Obstacle
>> x = Caractère utilisé pour remplir en cas de carré
>>> 1e ligne : N.ox
>>> Ne ligne : ....o....
>> Si autre caractère : Map error

**PENSER A FREE**

## But

Trouver le plus grand carré possible dans une map donnée, en fonction de certaines conditions et de l'imprimer.

## Steps

1. Parsing du fichier et des erreurs probables
2. Affichage de la map donnée
3. Backtracking pour vérifier toutes les possibilités
4. Modification de la map en fonction des paramètres donnés
5. Affichage de la map modifiée