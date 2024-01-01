# Conversion Hexadécimale vers Affichage 7-Segments

Ce programme C++ prend un chiffre hexadécimal en entrée, le convertit en binaire, puis affiche la représentation correspondante sur un affichage 7-segments, accompagnée d'une illustration graphique.

## Instructions
1. Compilez le code en utilisant un compilateur C++.
2. Exécutez le fichier exécutable généré.
3. Saisissez un chiffre hexadécimal valide (0-9, A-F).
4. Le programme affichera la représentation binaire et l'affichage 7-segments correspondant au chiffre hexadécimal saisi.
5. Répétez les étapes 3-4 selon vos besoins.
6. Pour quitter le programme, entrez un chiffre hexadécimal non valide.

## Fonctionnement
Le programme utilise une boucle principale pour permettre à l'utilisateur de saisir continuellement des chiffres hexadécimaux. Il vérifie que l'entrée est valide et affiche ensuite la représentation binaire du chiffre saisi. En utilisant cette représentation binaire, il détermine la logique des segments 7-segments correspondante et l'affiche graphiquement.

Le processus se répète tant que l'utilisateur souhaite convertir de nouveaux chiffres hexadécimaux. La sortie du programme se produit lorsque l'utilisateur entre un chiffre hexadécimal non valide.

## Composants Clés
- `segmentsLogic`: Fonction déterminant la logique des segments 7-segments en fonction des bits binaires.
- `hexDigitToBinary`: Fonction convertissant un chiffre hexadécimal en une représentation binaire.
- `showResult`: Fonction affichant graphiquement le résultat sur un affichage 7-segments.
![Animation](https://github.com/badredddineazzaz/7segmentscpp/assets/84666903/c19cc9f3-721c-4a1c-8700-3bcc831bbb6c)

AZZAZ Badreddine
