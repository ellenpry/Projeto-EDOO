#include "Alice.h"
#include "EventosAlice.h"
#include <iostream>

Alice::Alice() {
    nome = "Alice";
    carisma = 3;
    resistencia = 2;
    inteligencia = 5;
}

void Alice::inicializarEventos() {
    std::cout << nome << " iniciou seus eventos!\n";
    eventos.push_back(criarEventoAlice1());
    eventos.push_back(criarEventoAlice2());
    eventos.push_back(criarEventoAlice3());
    eventos.push_back(criarEventoAlice4());
}

void Alice::tomarDecisao() {
    std::cout << nome << " tomou uma decisão!\n";
    // Lógica específica de decisão de Alice
}
