#include "iostream"
using namespace std;

int main()
{
    int hora, minuto, segundo;
    bool repeticion;

    do{
    repeticion = false;

    cout << "\nIngresa una hora cualquiera, en formato de 24 horas";
    cout << "\nIngresa la hora: ";
    cin >> hora;

    cout << "Ingresa el minuto: ";
    cin >> minuto;

    cout << "Ingresa el segundo: ";
    cin >> segundo;

    if(hora < 24 && minuto < 60 && segundo < 60){

        segundo++;
        
        //Aumentamos al segundo en uno

        if(segundo == 60){
            segundo = 0;
            minuto++;
        }
        if(minuto == 60){
            minuto = 0;
            hora++;
        }
        if(hora == 24){
            hora = 0;
        } 
        
        cout << "La hora en formato hh / mm / ss es: ";
        cout << hora << " / " << minuto << " / " << segundo;

    }else{
        cout << "\nLa no esta bien escrita, por favor intentalo de nuevo\n";
        repeticion = true;
    }
    
    }while(repeticion);

    return 0;
}
