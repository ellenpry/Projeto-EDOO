#include "Caio.h"
#include <iostream>

Caio::Caio() {
    nome = "Caio";
    carisma = 3;
    resistencia = 5;
    inteligencia = 2;
}

void Caio::inicializarEventos() {
    std::cout << nome << " iniciou seus eventos!\n";
    // Adicione aqui os eventos de Caio no futuro
}

void Caio::tomarDecisao() {
    std::cout << nome << " tomou uma decisão!\n";
    // Lógica específica de decisão de Caio
}
