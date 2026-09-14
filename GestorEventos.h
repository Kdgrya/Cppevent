#ifndef UNTITLED1_GESTOREVENTOS_H
#define UNTITLED1_GESTOREVENTOS_H

#include <string>
#include "Eventos.h"
#include <memory>
#include <vector>

class Create_Eventos {
public:
    ~Create_Eventos();
    Create_Eventos(std::string name, int d, int m, int y);

    const EVmanger& getData() const { return data; }

private:
    EVmanger data;
};

class GestorEventos {
public:
    std::vector<std::unique_ptr<Create_Eventos>> Levents;
    ~GestorEventos();
    void SolicitarDatos();
    void verEventos();
};

#endif //UNTITLED1_GESTOREVENTOS_H
