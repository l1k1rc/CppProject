# CppProject
## Création d'une simulation d'une banque.
>> M2 IISC RS $\alpha$
>
> ```DUCROUX Guillaume```
```SAINT-AMAND Matthieu```

Ci-joint, vous trouverez les fichiers sources du code. Le makefile se trouve au niveau de ces codes. Pour compiler,
ouvrez un terminal vers le chemin du makefile.

Compiler les fichiers :
```make```
Supprimer les fichiers de compilation et executables: 
```make mrproper```.
---
Pour lancer la simulation une fois la compilation effectuée :
```./simu -st 50 -nc 5 -as 10```
```
-st : Le temps de simulation prévu.
-nc : Le nombre de caissiers (non fonctionnnel mais à taper tout de même).
-as : Le temps moyen d'un service d'un caissier pour un client.
```
 ---
 Dans la simulation, 4 caissiers sont donc assignés par défaut.
 
 Lors de son execution, le programme précise :
 1. si les caissiers sont disponibles `No cashiers available`
 2. le temps de travail en cours pour chaque caissier `Service time decr`
 3. la taille de la queue `Size queue is : X clients.`
 4. la prise en compte d'un client de la file `Treatment of the client`
 5. le temps de service pour un client sortant de la file `Client servicing with a time of : X tours`
 6. la fin d'un service d'un client `####### End of a service #######`
 7. l'arrivée d'un client `Client arrival n°X`
 
 >Une fois le temps de simulation initial dépassé, la banque ferme et traite les derniers clients de la file et en service.

Enfin, des statistiques de la simulation s'affichent à la fin de l'execution. Quant à la documentation Doxygen, celle-ci se trouve dans le répertoire html, ouvrez le `index.html` pour y accéder.
