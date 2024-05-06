  #include <iostream>
using namespace std;

int main()
{
    int n = 1; // Número a multiplicar
    int i = 1; // Multiplicador
    while (i <= 10)
    {
        cout << n << "x" << i << "=" << n * i << "\n";
        i++;
    }

    return 0;
}
