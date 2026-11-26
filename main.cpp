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

    wypisz(10);          // int
    wypisz(3.14f);       // float
    wypisz(3.14159);     // double
    wypisz('A');         // char
    wypisz(string("Hej")); // string

    return 0;

}
