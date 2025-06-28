#include "Joao.h"
#include <iostream>

Joao::Joao() {
    nome = "João";
    carisma = 3;
    resistencia = 3;
    inteligencia = 4;
}

void Joao::inicializarEventos() {
    // Exemplo: carregar eventos de algum vetor ou arquivo
    std::cout << nome << " iniciou seus eventos!\n";
}

void Joao::tomarDecisao() {
    // Lógica de escolha do usuário/jogador
    std::cout << nome << " tomou uma decisão!\n";
}
