
# TP2 - Les Classes en C++

## Exercice 1 - Classes et instances

1. Le programme affiche deux fois le chiffre **17**.

2. Une erreur de compilation survient.

## Exercice 2 - Copies

voir *letter_count_v2.cpp* et *letter_count_v2.h*

1. `= { 26, 0 }` correspond à un vector comprenant les éléments 26 et 0

2. Par défaut le compilateur a ajouté un constructeur par défaut mais en ajoutant notre constructeur de copie il faut qu'on rajoute un constructeur sans paramètres.

3. Selon moi le constructeur de copie sera appelé 2 fois mais avec le copy elision il est enfaite appelé qu'une fois.

## Exercice 3 - Rappels d'événements !

   
Maintenant, on veut utiliser cette horloge pour déclencher des rappels d'événements. Ces événements sont passés en arguments du programme de la manière suivante :
```shell
./reminders "8:05 Il faut se lever" "21:59 Il faut envoyer le questionnaire du cours"
```

5. Prenez connaissance de l'implémentation de la classe `Event` qui contient un message à afficher
   ansi qu'un `Time` (`std::pair` de deux entiers) indiquant le temps (en secondes et minutes) à laquelle la notification doit apparaitre.
   Rajoutez une fonction membre `notify_time(int current_min, int current_sec)` à la classe `Event` qui,
   si le moment du rappel est arrivé, imprime dans la console le message de l'événement et renvoie `true`, autrement, elle renvoie `false`.
   
6. Ajoutez à la classe `Clock` un attribut `std::vector<Event> _events` qui contient tous les événements à traiter.
   Implémentez une fonction `add_event(const Event&)` qui rajoute un événement donné à `_events`.\
   Dans le `main`, utilisez la fonction `parse_events` déjà implémentée pour ajouter les événements dans votre horloge.
   
7. Dans la fonction `Clock::tick`, appelez `notify_time` sur tous les événements contenus dans `_events`.\
   Si la fonction renvoie `true`, arrangez-vous pour retirer l'événement du tableau.
   
Testez votre nouveau système de notifications !

8. **Bonus** Pourquoi `std::vector` n'est-il pas le meilleur conteneur pour stocker les événements ?
   En recherchant sur https://en.cppreference.com/w/cpp/container, proposez une nouvelle implémentation qui s'avérerait plus efficace.

---

Céline Noël, Stéphane Vialette, Mathias Weller  
C++ Master 1    
2020 - 2021
