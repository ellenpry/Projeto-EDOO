#include "Alice.h"
#include <iostream>

Alice::Alice() {
    nome = "Alice";
    carisma = 3;
    resistencia = 2;
    inteligencia = 5;
}

void Alice::inicializarEventos() {
    std::cout << nome << " iniciou seus eventos!\n";
    // Adicione aqui os eventos de Alice no futuro
}

void Alice::tomarDecisao() {
    std::cout << nome << " tomou uma decisão!\n";
    // Lógica específica de decisão de Alice
}
