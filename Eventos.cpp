#include <iostream>
#include <memory>
#include "GestorEventos.h"

void Eventos() {

    auto gestor = std::make_unique<GestorEventos>();
    bool continuar = true;

    while (continuar) {
        if (int opc; !(std::cin >> opc)) {
            std::cout << "Has Ingresado una Letra, el Programa solo Acepta numeros \n" << std::endl;
            std::cout << "vuelve a intentarlo" << std::endl;
            std::cin.clear();
            std::cin.ignore(1000, '\n');
            std::cin.get();
#ifdef _WIN32
            std::system("cls");
#else
            std::system("clear");
#endif
        }
        else {
            if (opc == 1) {
                gestor->SolicitarDatos();
            }
            else if (opc == 2) {
                gestor->verEventos();
            }
            else if (opc == 3) {
                std::cout << "Limpiando y Saliendo de la applicacion" << std::endl;
                continuar = false;
            }
            else {
                std::cout << "opcion no reconocida" << std::endl;
            }
        }
    }
    return;
}
