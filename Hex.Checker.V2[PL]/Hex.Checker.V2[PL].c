/* Welcome to Hex.Checker V2 */
/* This is version for lazier counting */
/* Program will ask you to enter numbers you want to count by addition etc.. */
/* Made by: Trolit */
/*
Base is 16 (if addition is > 16 , move "1" to the next position)

A - 10
B - 11
C - 12
D - 13
E - 14
F - 15

addition - "+"
multiplication - "*"
division - "/"
subtraction - "-"
modulus - "%"
*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
/* I like this color, please, leave it unchanged. */
system("COLOR 2");

/* Thanks to this I know which one to do */
int checker = 0;

/* Ask for operation */
label:

/* I am introducing myself */
printf("*********************************************************\n           Jestem Kalkulatorem Szesnastkowym. \n           Jak chcesz to sprawdz moja biografie \n           (6. Informacje)\n*********************************************************\n\n\n");



printf("Wybierz co chcesz zrobic (Wpisz cyfre)\n");
printf("1. Dodawanie\n");
printf("2. Mnozenie\n");
printf("3. Odejmowanie\n");
printf("4. Dzielenie\n");
printf("5. Reszta\n");
printf("6. Informacje\n");
printf("7. Wyjscie\n\n\n");

printf("                                  *Uwaga*\n");
printf("Wartosci wpisuj w formie np. 5AD, 6AC itd... czyli jesli powiem:\nwpisz pierwsza wartosc to oczekuje od Ciebie\n");
printf("5AD\n\n\n");

scanf("%d", &checker);

if (checker == 1)
{
    printf("\n\n***DODAWANIE***\n\n");
    int x,y;
    printf("Wpisz pierwsza wartosc\n");
    scanf("%x", &x);
    printf ("Wpisz druga wartosc\n");
    scanf("%x", &y);
    printf ("Dodawanie liczb: %2X i %2X = %2X\n\n\n", x,y,x+y);

    int w;
    printf("Czy chcesz zebym nas zabral do menu wyboru? \n1 - TAK(Zabierz mnie do menu) \n2 - NIE(Skonczylem meczarnie)\n");
    scanf("%i", &w);

            if (w == 1) goto label;
            if (w == 2) system("PAUSE");
}

if (checker == 2)
{
    printf("\n\n***MNOZENIE***\n\n");
    int x,y;
    printf("Wpisz pierwsza wartosc\n");
    scanf("%x", &x);
    printf ("Wpisz druga wartosc\n");
    scanf("%x", &y);
    printf ("Mnozenie liczb: %2X i %2X = %2X\n\n\n", x,y,x*y);

    int w;
    printf("Czy chcesz zebym nas zabral do menu wyboru? \n1 - TAK(Zabierz mnie do menu) \n2 - NIE(Skonczylem meczarnie)\n");
    scanf("%i", &w);

            if (w == 1) goto label;
            if (w == 2) system("PAUSE");
}

if (checker == 3)
{
    printf("\n\n***ODEJMOWANIE***\n\n");
    int x,y;
    printf("Wpisz pierwsza wartosc\n");
    scanf("%x", &x);
    printf ("Wpisz druga wartosc\n");
    scanf("%x", &y);
    printf ("Odejmowanie liczb: %2X i %2X = %2X\n\n\n", x,y,x-y);

    int w;
    printf("Czy chcesz zebym nas zabral do menu wyboru? \n1 - TAK(Zabierz mnie do menu) \n2 - NIE(Skonczylem meczarnie)\n");
    scanf("%i", &w);

            if (w == 1) goto label;
            if (w == 2) system("PAUSE");
}

if (checker == 4)
{
    printf("\n\n***DZIELENIE***\n\n");
    int x,y;
    printf("Wpisz pierwsza wartosc\n");
    scanf("%x", &x);
    printf ("Wpisz druga wartosc\n");
    scanf("%x", &y);
    printf ("Dzielenie liczb: %2X i %2X = %2X\n\n\n", x,y,x/y);

    int w;
    printf("Czy chcesz zebym nas zabral do menu wyboru? \n1 - TAK(Zabierz mnie do menu) \n2 - NIE(Skonczylem meczarnie)\n");
    scanf("%i", &w);

            if (w == 1) goto label;
            if (w == 2) system("PAUSE");
}

if (checker == 5)
{
    printf("\n\n***RESZTA***\n\n");
    int x,y;
    printf("Wpisz pierwsza wartosc\n");
    scanf("%x", &x);
    printf ("Wpisz druga wartosc\n");
    scanf("%x", &y);
    printf ("Reszta miêdzy: %2X i %2X = %2X\n\n\n", x,y,x%y);

    int w;
    printf("Czy chcesz zebym nas zabral do menu wyboru? \n1 - TAK(Zabierz mnie do menu) \n2 - NIE(Skonczylem meczarnie)\n");
    scanf("%i", &w);

            if (w == 1) goto label;
            if (w == 2) system("PAUSE");
}

if (checker == 6)
{
    printf("\n\n************************************************************************\n");
    printf("Mam na imie kalkulator szesnastkowy albo po prostu Andrzejek :) \n");
    printf("Urodzilem sie 5 marca 2017 roku\n");
    printf("Zostalem napisany w CodeBlocksie przez Trolita\n");
    printf("Jestem tu by Ci pomoc. Chce Ci pokazac rezultaty dzialania na liczbach\nszesnastkowych."
           " Ty je rozwiazujesz na kartce papieru, potem mi mowisz\nco ja mam policzyc i sprawdzasz.");
    printf("\n************************************************************************\n\n\n");

    int w;
    printf("Czy chcesz zebym nas zabral do menu wyboru? \n1 - TAK(Zabierz mnie do menu) \n2 - NIE(Skonczylem meczarnie)\n");
    scanf("%i", &w);

            if (w == 1) goto label;
            if (w == 2) system("PAUSE");
}

if (checker == 7)
{
    printf("\n\nWCISNIJ ENTER\n");
    printf("WCISNIJ ENTER!!!.......\n");
    printf("WCISNIJ ENTER!!!.......\n");
    printf("WCISNIJ ENTER!!!.......\n");
    printf("WCISNIJ ENTER!!!.......\n");

    return 0;
    system("pause");
}
}









