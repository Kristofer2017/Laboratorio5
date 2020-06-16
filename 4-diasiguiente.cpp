#include "iostream"
using namespace std;

bool bisiesto(int);
bool mesdetreinta(int);

int main()
{
    int dia, mes, anio;
    bool repeticion;

    do{
    repeticion = false;

    cout << "\nIngresa una fecha cualquiera. Ingresa el dia: ";
    cin >> dia;

    cout << "Ingresa el mes: ";
    cin >> mes;

    cout << "Ingresa el anio: ";
    cin >> anio;

    if(dia <= 31 && mes <= 12){

        dia++;
        //Proceso para revisar si se suma en el mes de febrero

        if(bisiesto(anio) && dia == 30 && mes == 2){
            dia = 1;
            mes++;
        }
        if (bisiesto(anio) == false && dia == 29 && mes == 2){
            dia = 1;
            mes++;
        }
        //Proceso para revisar si tiene 30 dias

        if (mesdetreinta(mes) && dia == 30){
            dia = 1;
            mes++;
        }
        if (dia == 32){
            dia = 1;
            mes++;
        }
        //Aumentamos al anio siguiente si el me es 13 y reiniciamos el mes

        if(mes == 13){
            mes = 1;
            anio++;
        }    
        
        cout << "La fecha en formato dd / mm / aa es: ";
        cout << dia << " / " << mes << " / " << anio;
    }else{
        cout << "\nLa fecha esta mal escrita";
        repeticion = true;
    }
    
    }while(repeticion);

    return 0;
}
//Funcion para determinar si un anio es bisiesto

bool bisiesto(int anio)
{
    bool respuesta = false;

    if(anio % 400 == 0){
        respuesta = true;
    }
    if(anio % 4 == 0 && anio % 100 != 100){
        respuesta = true;
    }

    return respuesta;
}
//Funcion para determinar si un mes tiene 3 dias

bool mesdetreinta(int mes)
{
    bool respuesta = false;

    switch (mes)
    {
    case 4:
        respuesta = true;
        break;
    case 6:
        respuesta = true;
        break;
    case 9:
        respuesta = true;
        break;
    case 11:
        respuesta = true;
        break;
    }

    return respuesta;
}

