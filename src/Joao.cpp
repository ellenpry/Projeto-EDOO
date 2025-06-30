#include "Joao.h"
#include "EventosJoao.h"
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
    eventos.push_back(criarEventoJoao1());
    eventos.push_back(criarEventoJoao2());
    eventos.push_back(criarEventoJoao3());
    eventos.push_back(criarEventoJoao4());
}

void Joao::tomarDecisao() {
    // Lógica de escolha do usuário/jogador
    std::cout << nome << " tomou uma decisão!\n";
}
