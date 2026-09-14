#include "GestorEventos.h"
#include <iostream>

Create_Eventos::Create_Eventos(std::string name, int d, int m, int y) {
    data.event_name = std::move(name);
    data.day = d;
    data.month = m;
    data.year = y;
}

void GestorEventos::verEventos() {
    if (Levents.empty()) {
        std::cout << "\nNo Hay Eventos que mostrar." << std::endl;
        return;
    }

    std::cout << "\n========= LISTA DE EVENTOS =========" << std::endl;
    for (const auto& event : Levents) {
        if (!event) continue;

        const auto& info = event->getData();
        std::cout << "Nombre:  " << info.event_name << std::endl;
        std::cout << "Fecha:   " << info.day << "/" << info.month << "/" << info.year << std::endl;
        std::cout << "------------------------------------" << std::endl;
    }
}

void GestorEventos::SolicitarDatos() {
    std::string name;
    int day, month, year;

    std::cout << "\n--- Registrar Nuevo Evento ---" << std::endl;
    std::cout << "Ingrese el nombre del Evento: ";
    std::cin.ignore();
    std::getline(std::cin, name);

    std::cout << "Ingrese el Dia: "; std::cin >> day;
    std::cout << "Ingrese el Mes: "; std::cin >> month;
    std::cout << "Ingrese el Año: "; std::cin >> year;

    auto nuevoEvento = std::make_unique<Create_Eventos>(name, day, month, year);
    Levents.push_back(std::move(nuevoEvento));

    std::cout << "¡Evento registrado exitosamente!" << std::endl;
}

GestorEventos::~GestorEventos() = default;
Create_Eventos::~Create_Eventos() = default;
