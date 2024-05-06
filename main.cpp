#include <iostream>
using namespace std;


int main()
{
    char letra;

    cout << "ingrese una letra: ";
    cin >> letra;

    switch (letra)
    {
        case 'r':
            cout << "Rojo" << endl;
            return 0;
        case 'y':
           cout << "Amarillo" << endl;
           return 0;
        case 'b':
           cout << "Azul" << endl ;
           return 0;
        case 'w':
           cout << "Blanco" << endl  ;
           return 0;
        case 'k':
           cout << "Negro" << endl ;
           return 0;
        case 'c':
           cout << "Cian" << endl ;
           return 0;
        case 'g':
           cout << "Verde" << endl ;
           return 0;

        default:
        cout << "letra no valida" << endl;
        return 0;
 
    }

    return 0;
}