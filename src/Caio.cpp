#include "Caio.h"
#include "EventosCaio.h"
#include <iostream>

Caio::Caio() {
    nome = "Caio";
    carisma = 3;
    resistencia = 5;
    inteligencia = 2;
}

void Caio::inicializarEventos() {
    std::cout << nome << " iniciou seus eventos!\n";
    eventos.push_back(criarEventoCaio1());
    eventos.push_back(criarEventoCaio2());
    eventos.push_back(criarEventoCaio3());
    eventos.push_back(criarEventoCaio4());
}

void Caio::tomarDecisao() {
    std::cout << nome << " tomou uma decisão!\n";
    // Lógica específica de decisão de Caio
}
