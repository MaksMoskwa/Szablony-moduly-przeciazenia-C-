
#include <iostream>  // Biblioteka odpowiedzialna za wejście i wyjście danych
#include <string>    // Biblioteka umożliwiająca korzystanie z typu string

using namespace std; // Dzięki temu nie musimy pisać std:: przed cout, endl czy string


// Funkcja szablonowa (template), która może przyjmować różne typy danych
// T oznacza dowolny typ, np. int, float, double, char lub string
template <typename T>
void wypisz(T x)
{
    // Wyświetlenie przekazanej wartości na ekranie
    // endl kończy linię i przechodzi do następnej
    cout << x << endl;
}


int main()
{
    // Wywołanie funkcji wypisz() z różnymi typami danych

    wypisz(10);             // int - liczba całkowita
    wypisz(3.14f);          // float - liczba zmiennoprzecinkowa
    wypisz(3.14159);        // double - liczba zmiennoprzecinkowa o większej dokładności
    wypisz('A');            // char - pojedynczy znak
    wypisz(string("Hej"));  // string - tekst (ciąg znaków)

    // Funkcja wypisze każdą przekazaną wartość,
    // automatycznie dopasowując typ danych dzięki szablonowi

    return 0; // Zakończenie programu bez błędów
}
