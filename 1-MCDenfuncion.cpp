#include "iostream"
using namespace std;

int MCD(int, int);

int main(void)
{
    int a, b, mayor, menor;

    cout << "\nMaximo comun divisor de dos numeros\n\n";

    cout << "Digite un numero: ";
    cin >> a;

    cout << "Digite otro numero: ";
    cin >> b;

    if(a > b){
        mayor = a;
        menor = b;
    }else{
        if(b >= a){
            mayor = b;
            menor = a;
        }
    }

    cout << "\nEl Maximo Comun Divisor es: " << MCD(mayor, menor) << endl;

    return 0;
}

int MCD(int mayor, int menor)
{
    int residuo;
    do
    {
        
        residuo = mayor % menor;

        if (residuo != 0){
            mayor = menor;
            menor = residuo;
        }

    }while(residuo != 0);

    return menor;
}
