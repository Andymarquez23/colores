 #include <iostream>
using namespace std;

int main()
{
    // Programa que cuenta de uno en uno  hasta un numero n
    int i, n;
    //datos de entrada
    cout << "Ingrese un numero positivo n=";
    cin >> n;
    i = 0;

    while (i <= n)
    {
        cout << i << "\n";
        i = i + 1;
    }

    return 0;
}
