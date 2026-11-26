📘 Funkcja wypisująca dane z wykorzystaniem szablonów C++
📌 Opis projektu

Program przedstawia zastosowanie szablonów funkcji (Function Templates) w języku C++.

Dzięki wykorzystaniu szablonów możemy stworzyć jedną uniwersalną funkcję, która obsługuje różne typy danych bez konieczności pisania osobnych funkcji dla każdego typu.

W tym przykładzie funkcja wypisz() przyjmuje argument dowolnego typu i wyświetla go na ekranie za pomocą cout.

⚙️ Wykorzystane technologie
Język: C++
Biblioteki: <iostream>, <string>
Mechanizm: Szablony funkcji (template)
Kompilator: Dowolny kompilator obsługujący standard C++
💻 Kod programu
cpp
#include <iostream>
#include <string>

using namespace std;

template <typename T>
void wypisz(T x)
{
    cout << x << endl;
}

int main()
{
    wypisz(10);             // int
    wypisz(3.14f);          // float
    wypisz(3.14159);        // double
    wypisz('A');            // char
    wypisz(string("Hej"));  // string

    return 0;
}

🧠 Jak działa program?

Najważniejszym elementem programu jest deklaracja szablonu:

cpp
template <typename T>
void wypisz(T x)
{
    cout << x << endl;
}

template – informuje kompilator, że definiujemy szablon.
typename T – oznacza ogólny typ danych, który zostanie określony podczas wywołania funkcji.
T x – argument funkcji, którego typ zależy od przekazanej wartości.
cout << x – wyświetla przekazaną wartość.
endl – przechodzi do nowej linii.

Kompilator automatycznie rozpoznaje typ przekazanego argumentu i dostosowuje do niego funkcję.

📊 Przykładowe działanie

Program wywołuje funkcję wypisz() dla pięciu różnych typów danych:

Wywołanie	Typ danych	Wynik
wypisz(10)	int	10
wypisz(3.14f)	float	3.14
wypisz(3.14159)	double	3.14159
wypisz('A')	char	A
wypisz(string("Hej"))	string	Hej
Oczekiwany wynik w konsoli
text
10
3.14
3.14159
A
Hej

🚀 Zalety wykorzystania szablonów
Uniwersalność – jedna funkcja obsługuje wiele typów danych.
Czytelność – kod jest krótszy i łatwiejszy do utrzymania.
Wielokrotne wykorzystanie – nie trzeba tworzyć osobnych funkcji dla int, float, double czy string.
Elastyczność – funkcję można wykorzystać również z innymi typami, które obsługują operator << dla cout.

Ważne: Szablon nie obsługuje automatycznie absolutnie każdego typu danych. Przekazany typ musi umożliwiać operację używaną wewnątrz funkcji, w tym przypadku wyświetlanie za pomocą cout.

