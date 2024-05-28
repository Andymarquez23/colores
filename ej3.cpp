#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"ingresar tamaño de arreglo de numero: ";
    cin>>n;
    int i;
    int num[n];
    int impar[n];
    int j=0;

    for(int i=0; i<n; i=i++)
    {
        cout<<"ingresar numero:";
        cin>> num[i];
    }
    if(num[i]%2==0);{
        impar[j]=num[i];
        j++;
    }
    cout<<"el arreglo de pares es: ";
    for(int k=0; k<j; k++)
    {
        cout<<impar[k]<< "\n";
    }
    return 0;
}