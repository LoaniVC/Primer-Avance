/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <conio.h>
#include <string.h>
#include <string>

using namespace std;
int main()
{
    int numarticulo, opcion;
    float precio_unitario;
    string articulo, descripcion, categoria, clasficacion, fecha, caracteristicas, genero;

    cout << "\t ***BISONTE GAMES*** \n";
    cout << " 1.-Nombre del videojuego\n 2.-Año de lanzamiento\n 3.-Clasificacion\n 4.-Caracteristicas\n 5.-Descripcion\n 6.-Genero\n 7.-Eliminar Articulo\n 8.-Limpiar Pantalla\n 9.-Salir\n";
    cin >> opcion;

    switch (opcion)
    {
    case 1: 
        cout << "Ingrese el nombre del videojuego \n";
        cin >> numarticulo;
        cout << "ingrese el año de lanzamiento\n";
        cin.ignore();
        getline(cin, fecha); 
        cout << "ingrese la clasficacion\n";
        cin.ignore();
        getline(cin, clasficacion);
        cout << "ingrese las caracteristicas\n";
        cin.ignore();
        getline(cin, caracteristicas);
        cout << "ingrese la descripcion\n";
        cin >> descripcion;
        cout << "ingrese la descripcion\n";
        cin.ignore();
        getline(cin, descripcion);
        cout << "ingrese el genero\n";
        cin.ignore();
        getline(cin, genero); 
        return main();
        break;

    case 2://Eliminar Articulo
        break;

    case 3: //Limpiar Pantalla
        system("cls"); //clean  se utiliza en web 
        return main();
        break;

    case 4: //salir
        cout << "Gracias por utilizar el programa \n";
        break;

    default:
        cout << "ingrese una opcion correcta \n";
        return main();
        
        
    
    
    }
        

    }